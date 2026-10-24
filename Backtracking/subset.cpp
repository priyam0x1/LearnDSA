#include <iostream>
#include <string>
using namespace std;

void printSubsets(string str, string subset);

int main()
{
    string str = "abc";
    string subset = " ";
    printSubsets(str, subset);
    return 0;
}

void printSubsets(string str, string subset)
{
    if (str.size() == 0)
    {
        cout << subset << "\n";
        return;
    }

    char ch = str[0];
    // yes case
    printSubsets(str.substr(1, str.size() - 1), subset + ch);
    // no case
    printSubsets(str.substr(1, str.size() - 1), subset);
}