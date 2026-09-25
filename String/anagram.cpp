#include <iostream>
#include <string>
using namespace std;

bool anagram(string str1, string str2);

int main()
{
    string str = "mom";
    string str2 = "momm";
    anagram(str, str2);
    return 0;
}

bool anagram(string str1, string str2)
{
    if (str1.length() != str2.length())
    {
        cout << "Invalid Anagram" << endl;
        return false;
    }
    int count[26] = {0};
    for (int i = 0; i < str1.length(); i++)
    {
        count[str1[i] - 'a']++;
    }
    for (int i = 0; i < str2.length(); i++)
    {
        int idx = str2[i] - 'a';
        if (count[idx] == 0)
        {
            cout << "Invalid Anagram" << endl;
            return false;
        }
        count[idx]--;
    }
    cout << "Valid Anagram" << endl;
    return true;
}
