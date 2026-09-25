#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec1 = {1, 2, 3, 4};
    cout << "Vector Size : " << vec1.size() << endl;
    cout << "Vector Capacity : " << vec1.capacity() << endl;
    vec1.push_back(5);
    cout << "Vector Size : " << vec1.size() << endl;
    cout << "Vector Capacity : " << vec1.capacity() << endl;
    return 0;
}