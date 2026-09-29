// Last occurance of a number

#include <iostream>
using namespace std;

int lastOcc(int *arr, int n, int key);

int main()
{
    int arr[] = {4, 7, 2, 8, 7, 9, 7};
    int key = 11;
    cout << lastOcc(arr, sizeof(arr) / sizeof(int), key);
    return 0;
}

int lastOcc(int *arr, int n, int key)
{
    for (int i = n - 1; i > 0; i--)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
