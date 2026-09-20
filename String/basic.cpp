#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    // char work[] = "code";
    // cout << work << "\n";
    // cout << sizeof(work) << "\n";
    // cout << strlen(work) << "\n";
    // char work[30];
    // cin >> work;

    // cout << "Your word is : " << work;
    char sentence[50];
    cin.getline(sentence, 50, '.');
    cout << "Your sentence is : " << sentence << "\n";
    return 0;
}