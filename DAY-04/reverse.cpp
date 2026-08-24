#include <iostream>
using namespace std;

int main()
{
    int num = 123456789, rev = 0;

    while (num > 0)
    {
        int last = num % 10;
        rev = rev * 10 + last;
        num /= 10;
    }

    cout << "Reverse: " << rev;
    return 0;
}