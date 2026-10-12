#include <iostream>
using namespace std;

int search(int *arr, int size, int key);
int main()
{
    int arr[] = {19, 9, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(int);
    int key = 9;
    cout << "Element at index : " << search(arr, size, key);
    return 0;
}

int search(int *arr, int size, int key)
{
    int large = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
