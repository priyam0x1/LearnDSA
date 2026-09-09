#include <iostream>
using namespace std;

int insertion(int *arr, int n);

int main()
{
    int arr[] = {5, 4, 1, 3, 2, 9, 3, 6, 5};
    int size = sizeof(arr) / sizeof(int);
    insertion(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

int insertion(int *arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int prev = i - 1;
        while (prev >= 0 && arr[prev] > curr)
        {
            swap(arr[prev + 1], arr[prev]);
            prev--;
        }
        arr[prev + 1] = curr;
    }
}
