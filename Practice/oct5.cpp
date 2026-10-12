#include <iostream>
using namespace std;

int large(int *arr, int size);
int main()
{
    int arr[] = {19, 9, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(int);
    cout << large(arr, size);
    return 0;
}

int large(int *arr, int size)
{
    int large = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > large)
        {
            large = arr[i];
        }
    }
    return large;
}
