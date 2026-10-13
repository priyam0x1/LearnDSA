// First Occurance Check using Vector
#include <iostream>
#include <vector>
using namespace std;

int lastOcc(vector<int> vec, int i, int key);

int main()
{
    vector<int> vec = {0, 1, 2, 3, 4, 5};
    vector<int> vec2 = {1, 2, 4, 3, 4, 5};
    cout << "Last Occurance at index : " << lastOcc(vec2, 0, 5);

    return 0;
}

int lastOcc(vector<int> vec, int i, int key)
{
    if (i == vec.size())
    {
        return -1;
    }

    int idx = lastOcc(vec, i + 1, key);
    if (idx == -1)
    {
        if (vec[i] == key)
        {
            return i;
        };
    }

    return idx;
};
