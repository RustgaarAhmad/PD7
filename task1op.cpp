#include <iostream>
using namespace std;

void printStars(int);

main()
{
    int rowSize;
    cout << "Enter desired number of rows: ";
    cin >> rowSize;
    printStars(rowSize);
}
void printStars(int rowSize)
{
 for (int i=rowSize;i>=1;i--)
    {
        for (int j=1;j<=i; j++)
        {
            cout <<"*";
        }
        cout <<endl;
    }
}