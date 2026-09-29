// First occurance of a number

#include <iostream>
using namespace std;

int firstOcc(int *arr, int n, int key);
int main()
{
    int arr[] = {4, 7, 2, 7, 9};
    int element = 6;
    int size = sizeof(arr) / sizeof(int);
    int index = firstOcc(arr, size, element);
    cout << index;
    return 0;
}

int firstOcc(int *arr, int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }

    return -1;
}