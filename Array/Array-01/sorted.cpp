#include <iostream>
using namespace std;

int main()
{
    int arr[] = {11, 22, 46, 56, 111};
    int size = sizeof(arr) / sizeof(int);
    bool isSorted = true;
    for (int i = 0; i < size; i++)
    {
        if (i == (size - 1))
        {
            break;
        }

        if (arr[i] > arr[i + 1])
        {
            isSorted = false;
            break;
        }
    }
    if (isSorted)
    {
        cout << "Sorted Array";
    }
    else
    {
        cout << "Not Sorted";
    }

    return 0;
}