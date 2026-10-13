// First Occurance Check using array

#include <iostream>
using namespace std;

int firstOcc(int *arr, int size, int i, int key);

int main()
{
    int arr1[] = {1, 2, 3, 3, 4, 5};
    int arr2[] = {1, 2, 4, 3, 4, 5};
    cout << "First Occurance at index : " << firstOcc(arr2, (sizeof(arr2) / sizeof(int)), 0, 5);

    return 0;
}

int firstOcc(int *arr, int size, int i, int key)
{
    if (i == size)
    {
        return -1;
    }

    if (arr[i] == key)
    {
        return i;
    }

    return firstOcc(arr, size, i + 1, key);
};
