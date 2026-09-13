#include <iostream>
using namespace std;

int search(int mat[3][3], int n, int key);

int main()
{
    int matrix[3][3] = {
        {2, 4, 6},
        {1, 5, 9},
        {8, 3, 7}};
    int n = 3, key = 7;
    int result = search(matrix, n, key);
    if (result == -1)
    {
        cout << "Key Not Found";
    }
    else
    {
        cout << "Key Found at index : " << result;
    }
    return 0;
}

int search(int mat[3][3], int n, int key)
{
    int idx = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] == key)
            {
                return idx;
            }
            idx++;
        }
    }
    return -1;
}
