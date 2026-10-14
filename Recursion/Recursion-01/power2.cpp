#include <iostream>
#include <vector>
using namespace std;

int myPow(int x, int n);

int main()
{
    cout << myPow(2, 3);
    return 0;
}

int myPow(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }

    int halfPower = myPow(x, n / 2);
    int halfPowerSquare = halfPower * halfPower;

    if (n % 2 != 0)
    {
        return x * halfPowerSquare;
    }

    return halfPowerSquare;
}
