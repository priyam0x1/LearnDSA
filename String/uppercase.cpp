#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char word[50];
    cout << "Enter The Word : ";
    cin.getline(word, 50);
    int len = strlen(word);
    for (int i = 0; i < len; i++)
    {
        int ch = word[i];
        if (ch >= 'A' && ch <= 'Z')
        {
            continue;
        }
        else
        {
            word[i] = ch - 'a' + 'A';
        }
    }

    for (int i = 0; i < len; i++)
    {
        cout << word[i];
    };
    return 0;
}