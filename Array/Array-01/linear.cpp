#include <iostream>
using namespace std;

int linearSearch(int *arr, int n, int key);

int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int size = sizeof(arr) / sizeof(int);
    cout << linearSearch(arr, size, 10);
    return 0;
}

int linearSearch(int *arr, int n, int key)
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
