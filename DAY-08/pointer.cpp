#include <iostream>
using namespace std;

int main()
{
    int x = 5;
    int y = 6;

    int *ptr1 = &x;
    int *ptr2 = &y;
    cout << "Before Modifying the pointer : \n";
    cout << "Adress of x using ptr 1 : " << ptr1 << " \n";
    cout << "Adress of y using ptr 2 : " << ptr2 << " \n";
    ptr1 = ptr2;
    cout << "After Modifying the pointer : \n";
    cout << "Adress of y using ptr 1 : " << ptr1 << " \n";
    cout << "Adress of y using ptr 2 : " << ptr2 << " \n";
    return 0;
}