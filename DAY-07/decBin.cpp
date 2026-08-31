// This code have some issue, but i am not able to find it right now
// if you can find it then please DM me on Linkdin - (priyam0x1 : Priyam Pratim)
// Date : 31-08-2026
// Right now i am a beginner

#include <iostream>
using namespace std;

int decBin(int decNum);
int rev(int n);

int main()
{
    int result = decBin(6);
    cout << result << " ";
    return 0;
}

int decBin(int decNum)
{
    int n = decNum;
    int num = 0;
    while (n > 0)
    {
        int rem = n % 2;
        num = (num * 10) + rem;
        n /= 2;
    }
    int binaryNum = rev(num);
    return binaryNum;
}

int rev(int n)
{
    int binaryNum = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        binaryNum = binaryNum * 10 + lastDigit;
        n /= 10;
    }
    return binaryNum;
}