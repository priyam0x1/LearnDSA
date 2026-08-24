#include <iostream>
using namespace std;
int main()
{
    int num, isPrime = 1;
    cout << "Enter The Number : ";
    cin >> num;

    if (num < 2)
    {
        isPrime = 0;
    }

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            isPrime = 0;
        }
    }

    if (isPrime == 1)
    {
        cout << num << " is Prime";
    }
    else
    {
        cout << num << " is not Prime";
    }

    return 0;
}