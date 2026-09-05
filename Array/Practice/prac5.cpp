// Move all negative numbers to the beginning
// Order doesn't necessarily need to be preserved unless specified.

#include <iostream>
using namespace std;

void moveNegative(int *arr, int n);

int main()
{
    int arr[] = {2, -1, 0, -7, 5, -9, 9, 3, -12, 4};
    int n = sizeof(arr) / sizeof(int);
    cout << "Before Moving : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    moveNegative(arr, n);
    cout << "After Moving : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

void moveNegative(int *arr, int n)
{
    int idx = 0, revIndex = n - 1, copyArr[n];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            copyArr[idx] = arr[i];
            idx++;
        }
        else if (arr[i] >= 0)
        {
            copyArr[revIndex] = arr[i];
            revIndex--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = copyArr[i];
    }
}