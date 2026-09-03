#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 37, 4, 56, 6, 2, 7, 8, 2, 9, 2, 0, 2, 2, 2, 2};
    int size = sizeof(arr) / sizeof(int);
    int large = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (large < arr[i])
        {
            large = arr[i];
        }
    }
    int secLarge = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == large)
        {
            continue;
        }
        if (arr[i] > secLarge)
        {
            secLarge = arr[i];
        }
    }

    cout << secLarge;

    return 0;
}