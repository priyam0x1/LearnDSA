#include <iostream>
using namespace std;

int main()
{
    int marks[3][3] = {
        {54, 23, 46},
        {78, 58, 96},
        {14, 15, 16},
    };
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << marks[i][j] << " ";
        }
    }
    return 0;
}
