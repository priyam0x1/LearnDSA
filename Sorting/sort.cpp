#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {2, 5, 7, 2, 3, 8, 4, 5, 6, 1, 9};
    int n = sizeof(arr) / sizeof(int);
    sort(arr, arr + n, greater<int>());
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}