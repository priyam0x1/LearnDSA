#include <iostream>
using namespace std;

int main()
{
    int arr[3] = {1, 2, 3};
    int *ptr1 = &arr[0];
    int *ptr2 = &arr[1];
    cout << "Array Address : " << arr << " \n";
    cout << "Ptr1 Address : " << ptr1 << " \n";
    cout << "Ptr2 Address : " << ptr2 << " \n";
    cout << "Address of arr[1] using ptr : " << (ptr1 + 1) << " \n";
    return 0;
}