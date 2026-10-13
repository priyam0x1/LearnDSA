#include <iostream>
using namespace std;

bool isSorted(int *arr, int size, int i);

int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 4, 3, 5};
    cout << isSorted(arr2, (sizeof(arr2) / sizeof(int)), 0);

    return 0;
}

bool isSorted(int *arr, int size, int i)
{
    if (i == size - 1)
    {
        return true;
    }

    if (arr[i] > arr[i + 1])
    {
        return false;
    }

    return isSorted(arr, size, i + 1);
};
