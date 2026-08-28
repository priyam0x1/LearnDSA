#include <iostream>
using namespace std;

int fact(int n);
int main()
{
    cout << fact(6);
    return 0;
}

int fact(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}