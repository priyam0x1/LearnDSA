#include <iostream>
using namespace std;

void largest(int a, int b, int c, int d);
int main()
{
    largest(4, 1, 2, 3);
    return 0;
}
void largest(int a, int b, int c, int d)
{
    if (a > b && a > c && a > d)
    {
        cout << a << " is greatest";
    }
    else if (b > c && b > d)
    {
        cout << b << " is greatest";
    }
    else if (c > d)
    {
        cout << c << " is greatest";
    }
    else
    {
        cout << d << " is greatest";
    }
}