#include <iostream>
using namespace std;

void swap(int *arr, int n);

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(int);
    swap(arr, size);
    cout << "After Swap : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

void swap(int *arr, int n)
{
    int start = 0, end = n - 1;
    while (start < end)
    {
        arr[start] = arr[start] + arr[end];
        arr[end] = arr[start] - arr[end];
        arr[start] = arr[start] - arr[end];
        start++, end--;
    }
}
