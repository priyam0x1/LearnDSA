// Find the missing number

#include <iostream>
using namespace std;

int missing(int *arr, int n);

int main()
{
    int arr[] = {1, 2, 3, 5, 6};
    int size = sizeof(arr) / sizeof(int);
    int result = missing(arr, size);
    cout << result;
    return 0;
}

int missing(int *arr, int n)
{
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            num++;
            continue;
        }
        else
        {
            return num;
        }
    }

    return -1;
}