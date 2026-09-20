#include <iostream>
#include <cstring>
using namespace std;

void reverse(char *arr, int len);

int main()
{
    char name[] = "kuchu-puchu";
    int len = strlen(name);
    reverse(name, len);
    for (int i = 0; i < len; i++)
    {
        cout << name[i];
    }
    return 0;
}

void reverse(char *arr, int len)
{
    int start = 0, end = len - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
