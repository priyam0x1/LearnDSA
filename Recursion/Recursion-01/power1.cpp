#include <iostream>
using namespace std;

int myPow(int x, int n);

int main()
{
    cout << myPow(4, 0);
    return 0;
}

int myPow(int x, int n)
{
    if (n == 1)
    {
        return x;
    }

    int val = myPow(x, n - 1);
    return val * x;
}
