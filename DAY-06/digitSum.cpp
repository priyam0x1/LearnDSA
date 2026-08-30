#include <iostream>
using namespace std;

void digitSum(int n);
int main()
{
    digitSum(1234);
    return 0;
}
void digitSum(int n)
{
    int sum = 0;
    int num = n;
    while (n > 0)
    {
        int lastDigit = n % 10;
        sum += lastDigit;
        n /= 10;
    }
    cout << num << " = " << sum;
}