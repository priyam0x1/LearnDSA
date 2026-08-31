#include <iostream>
using namespace std;

int binDec(int binNum);
int main()
{
    int result = binDec(101110);
    cout << result << " ";
    return 0;
}

int binDec(int binNum)
{
    int n = binNum;
    int pow = 1;
    int dec = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        dec = dec + (lastDigit * pow);
        pow *= 2;
        n /= 10;
    }
    return dec;
}