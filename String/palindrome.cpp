#include <iostream>
#include <cstring>
using namespace std;

void palindrome(char *arr, int n);

int main()
{
    char word[] = "madam";
    palindrome(word, strlen(word));

    return 0;
}

void palindrome(char *arr, int n)
{
    int start = 0, end = n - 1;
    while (start < end)
    {
        if (arr[start] != arr[end])
        {
            cout << "Not Palindrome";
            return;
        }
        else
        {
            start++, end--;
        }
    }
    cout << "Palindrome";
};
