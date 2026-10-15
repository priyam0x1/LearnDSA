#include <iostream>
#include <string>
using namespace std;

void duplicate(string str, string ans, int i, bool map[26]);

int main()
{
    string str1 = "priiiiyaammm";
    string ans = "";
    bool map[26] = {false};
    duplicate(str1, ans, 0, map);
    return 0;
}

void duplicate(string str, string ans, int i, bool map[26])
{
    if (i == str.size())
    {
        cout << "Ans : " << ans << endl;
    }

    int mapIdx = (int)(str[i] - 'a');

    if (map[mapIdx] == true)
    {
        duplicate(str, ans, i + 1, map);
    }
    else
    {
        map[mapIdx] = true;
        duplicate(str, ans + str[i], i + 1, map);
    }
}
