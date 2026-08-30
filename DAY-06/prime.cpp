#include <iostream>
using namespace std;

bool isPrime(int n);
void allPrime(int n);
int main()
{
    allPrime(30);
    return 0;
}
void allPrime(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            cout << i << " is a prime number \n";
        }
    }
}

bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % 2 == 0)
        {
            return false;
        }
    }
    return true;
}