#include <iostream>
using namespace std;

bool isPrime(int);
int primorial(int);
main()
{
    int num;
    cout << "Enter Number: ";
    cin >> num;

    int result = primorial(num);
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

int primorial(int num)
{
    int product=1,i=1,value=2;
    while(i<=num)
    {
        bool state=isPrime(value); 
        if(state)
        {
            product*=value;
            i++;
        }
        value++;
    }
    return product;
}
