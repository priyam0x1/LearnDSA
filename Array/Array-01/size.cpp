#include <iostream>
using namespace std;
int main()
{
    int arr[3] = {1, 2, 3};
    int size = sizeof(arr) / sizeof(int);
    cout << size;

    return 0;
}