#include <iostream>
using namespace std;

int reverse(int n);
void palindrome(int n);
int main()
{
    palindrome(121);
    return 0;
}
void palindrome(int n)
{
    if (reverse(n) == n)
    {
        cout << n << " is a Palindrome number";
    }
    else
    {
        cout << n << " is Not Palindrome";
    }
}
int reverse(int n)
{
    int num = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        num = num * 10 + lastDigit;
        n /= 10;
    }
    return num;
}