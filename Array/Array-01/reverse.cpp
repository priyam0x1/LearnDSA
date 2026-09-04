#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(int);
    cout << "Before Reverse : ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << " \n";
    int copyArr[n];
    for (int i = 0; i < n; i++)
    {
        int j = n - i - 1;
        copyArr[j] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = copyArr[i];
    }
    cout << "After Reverse : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}