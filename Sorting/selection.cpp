#include <iostream>
using namespace std;

void selection(int *arr, int n);
int main()
{
    int arr[] = {5, 4, 1, 3, 2, 9, 3, 6, 5};
    int size = sizeof(arr) / sizeof(int);
    selection(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

void selection(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}
