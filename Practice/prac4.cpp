// Move all zeros to end

#include <iostream>
using namespace std;

void moveZero(int *arr, int n);

int main()
{
    int arr[] = {0, -1, 0, 7, 0, 9, 0, 3, -12, 0};
    int n = sizeof(arr) / sizeof(int);
    moveZero(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void moveZero(int *arr, int n)
{
    int idx = 0, copyArr[n];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            copyArr[idx] = arr[i];
            idx++;
        }
    }

    while (idx < n)
    {
        copyArr[idx] = 0;
        idx++;
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = copyArr[i];
    }
}
