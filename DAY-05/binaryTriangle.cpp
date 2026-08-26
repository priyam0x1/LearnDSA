#include <iostream>
using namespace std;

int main()
{
    int n = 1;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << n;
            if (n == 1)
            {
                n = 0;
            }
            else
            {
                n = 1;
            }
        }
        cout << endl;
    }

    return 0;
}