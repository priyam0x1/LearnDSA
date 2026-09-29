// Diference between maximun and minimun

#include <iostream>
using namespace std;

int diff(int *arr, int n);

int main()
{
    int arr[] = {44, 7, 20, 8, 7, 94, 7};
    cout << diff(arr, sizeof(arr) / sizeof(int));
    return 0;
}

int diff(int *arr, int n)
{
    int max = arr[0], min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        else if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    int res = max - min;
    return res;
}
