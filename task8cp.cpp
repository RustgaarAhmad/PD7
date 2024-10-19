#include <iostream>
#include <iomanip>
using namespace std;

void cargo(int);
main()
{
    int numCargo;
    cout << "Enter the count of cargo for transportation: ";
    cin >> numCargo;

    cargo (numCargo);
}

void cargo(int numCargo)
{
    int weight , minibus = 0 , truck = 0, train = 0, sum = 0;
    for (int i = 1; i <= numCargo; i ++)
    {
        cout << "Enter the tonnage of cargo "<< i << ": ";
        cin >> weight;
        sum += weight;

        if (weight <= 3)
        {
            minibus += weight;
        }
        else if (weight <=11)
        {
            truck += weight;
        }
        else{
            train += weight;
        }
    }

    float average = float((minibus * 200)+(truck * 175)+(train * 120))/float(sum);
    cout << fixed;
    cout << setprecision(2);
    cout << average << endl;
    cout << (float(minibus)/float(sum))*100<<"%"<<endl;
    cout << (float(truck)/float(sum))*100<<"%"<<endl;
    cout << (float(train)/float(sum))*100<<"%"<<endl;
}