#include <iostream>
using namespace std;

int triangle(int);
main()
{
    int num;
    cout << "Enter number of Triangle: ";
    cin >> num;

    int result = triangle(num);
    cout << "Dots in the Triangle: "<< result;
}

int triangle(int num)
{
    int dots = 0;
    for (int i =1; i <= num; i++)
    {
        dots = i + dots;
    }
    return dots;

}