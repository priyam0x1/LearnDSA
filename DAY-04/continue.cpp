#include <iostream>
using namespace std;
int main()
{
    int n;
    while (true)
    {
        cout << "Enter Number : ";
        cin >> n;
        if (n % 10 == 0)
        {
            continue;
        }
        cout << "You entered : " << n << endl;
    }

    return 0;
}