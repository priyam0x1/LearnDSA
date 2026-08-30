#include <iostream>
using namespace std;

void ch(char ch);
int main()
{
    ch('K');
    return 0;
}

void ch(char ch)
{
    if (ch == 'Z')
    {
        cout << 'A';
    }
    else if (ch == 'z')
    {
        cout << 'a';
    }
    else
    {
        char next = ch + 1;
        cout << next;
    }
}