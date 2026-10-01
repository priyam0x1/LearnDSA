#include <iostream>
using namespace std;

int print(int n)
{
    if (n == 0)
    {
        return 1;
    }
    cout << n << " ";
    return print(n - 1);
}

int main()
{
    print(9);
    return 0;
}