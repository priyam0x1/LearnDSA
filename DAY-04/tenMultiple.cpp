#include <iostream>
using namespace std;
int main()
{
    int n;
    while (true)
    {
        cout << "Enter The Number : ";
        cin >> n;
        if (n % 10 == 0)
        {
            break;
        }
    }
    cout << "Your entered the multiple of 10 -> " << n;

    return 0;
}
