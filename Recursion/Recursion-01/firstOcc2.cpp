// First Occurance Check using Vector
#include <iostream>
#include <vector>
using namespace std;

int firstOcc(vector<int> vec, int i, int key);

int main()
{
    vector<int> vec = {1, 2, 3, 3, 4, 5};
    vector<int> vec2 = {1, 2, 4, 3, 4, 5};
    cout << "First Occurance at index : " << firstOcc(vec, 0, 4);

    return 0;
}

int firstOcc(vector<int> vec, int i, int key)
{
    if (i == vec.size())
    {
        return -1;
    }

    if (vec[i] == key)
    {
        return i;
    }

    return firstOcc(vec, i + 1, key);
};
