#include <iostream>
using namespace std;

int main()
{
    int num = 2;
    int count = 0;
    int arr[] = {1, 2, 3, 4, 5, 6, 2, 7, 8, 2, 9, 2, 0, 2, 2, 2, 2};
    int size = sizeof(arr) / sizeof(int);
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 2)
        {
            count += 1;
        }
    }
    cout << "Frequeency of 2 is : " << count << " \n";
    return 0;
}