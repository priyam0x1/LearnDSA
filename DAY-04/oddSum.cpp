#include <iostream>
using namespace std;

int main()
{
    int num = 123456789;
    int sum = 0;
    while (num > 0)
    {
        int lastDigit = num % 10;
        if (lastDigit % 2 != 0)
        {
            sum += lastDigit;
        }
        num /= 10;
    }
    cout << "sum: " << sum;

    return 0;
}