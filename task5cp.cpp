#include <iostream>
using namespace std;

bool isPrime(int);
main()
{
    int num;
    cout << "Enter Number: ";
    cin >> num;
    int result = isPrime(num);
    cout << result;
}

bool isPrime(int num)
{
    if (num  <= 1)
    {
        return false;
    }
    else if(num == 2)
    {
        return true;
    }
    for (int i =2; i < num ; i ++)
    {
        if (num % i == 0)
        {
            return false;
        }

    }
    return true;
}