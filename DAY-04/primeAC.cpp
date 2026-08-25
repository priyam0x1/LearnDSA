#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Enter The Number : ";
    cin >> n;
    bool isPrime = true;

    if (n < 2)
    {
        isPrime = false;
    }

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
    {
        cout << "Number is Prime";
    }
    else
    {
        cout << "Not Prime";
    }

    return 0;
}