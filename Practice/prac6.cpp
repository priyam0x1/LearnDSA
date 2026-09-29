// Remove duplicate from a sorted array

#include <iostream>
using namespace std;

int duplicate(int *arr, int n);
int main()
{
    int arr[] = {1, 1, 2, 2, 3, 4, 4, 5, 6, 6, 7, 7, 7, 7, 9};
    int size = sizeof(arr) / sizeof(int);
    int newSize = duplicate(arr, size);
    for (int i = 0; i < newSize; i++)
    {
        cout << arr[i] << " ";
    }
}

int duplicate(int *arr, int n)
{
    if (n < 0)
    {
        return 0;
    }
    int copyArr[n], idx = 1;
    copyArr[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != copyArr[idx - 1])
        {
            copyArr[idx] = arr[i];
            idx++;
        }
    }

    for (int i = 0; i < idx; i++)
    {
        arr[i] = copyArr[i];
    }

    return idx;
}
