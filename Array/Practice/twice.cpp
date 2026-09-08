// Leetcode Problem : 217

#include <iostream>
using namespace std;

int twice(int *arr, int n);

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);
    int result = twice(arr, size);
    cout << result;
    return 0;
}

int twice(int *arr, int n)
{
    int start = 0, end = n - 1;
    while (start <= end)
    {
        if (arr[start] == arr[end])
        {
            return 1;
        }
        if (end == start + 1)
        {
            start = start + 1;
            end = n - 1;
        }
        if (end != start + 1)
        {
            end--;
        }
    }
    return 0;
}
