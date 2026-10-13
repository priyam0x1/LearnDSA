#include <iostream>
using namespace std;

int search(int *arr, int size);
int main()
{
    int arr[] = {19, 9, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(int);
    cout << "2nd largest element is : " << search(arr, size);
    return 0;
}

int search(int *arr, int size)
{
    int large = arr[0];
    int seclarge = INT32_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > large)
        {
            large = arr[i];
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == large)
        {
            continue;
        }
        if (arr[i] > seclarge)
        {
            seclarge = arr[i];
        }
    }

    return seclarge;
}
