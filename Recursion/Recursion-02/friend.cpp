#include <iostream>
using namespace std;

int friendPair(int n);

int main()
{
    cout << friendPair(4);
    return 0;
}

int friendPair(int n)
{
    if (n == 1 || n == 2)
    {
        return n;
    }
    int single = friendPair(n - 1);
    int pair = friendPair(n - 2) * (n - 1);

    return single + pair;
}