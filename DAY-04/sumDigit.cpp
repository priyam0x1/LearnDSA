#include <iostream>
using namespace std;

int main()
{
    int num = 99999;
    int a, sum = 0;
    while (num != 0)
    {
        a = num % 10;
        sum += a;
        num /= 10;
    }
    cout << "Sum : " << sum;
    return 0;
}