#include <iostream>
using namespace std;

void halfdiamond(int);
main()
{
    int rowSize;
    cout << "Enter desired number of rows: ";
    cin >> rowSize;
    halfdiamond(rowSize);
}

void halfdiamond(int rowSize)
{
    for (int row = 1; row <= rowSize; row++)
    {   
        for (int space = 1; space <= rowSize-row; space++)
        {
            cout<<" ";
        }
        for (int col = 1; col <= row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int row = rowSize; row >= 1; row--)
    {   

        for (int space = 1; space <= rowSize-row; space++)
        {
            cout<<" ";
        }
                for (int col = 1; col <= row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
}