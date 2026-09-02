#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 9, 4, 5};
    int size = sizeof(arr) / sizeof(int);
    int large = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > large)
        {
            large = arr[i];
        }
    }
    cout << large;
    return 0;
}