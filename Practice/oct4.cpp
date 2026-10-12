#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int count = 0;
    for (int i = 0; i < (sizeof(arr) / sizeof(int)); i++)
    {
        if (arr[i] % 2 == 0)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}