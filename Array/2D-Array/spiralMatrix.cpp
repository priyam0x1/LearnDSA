#include <iostream>
using namespace std;

void spiralMatrix(int matrix[][5], int n, int m);

int main()
{
    int matrix[7][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25},
        {26, 27, 28, 29, 30},
        {31, 32, 33, 34, 35}};
    spiralMatrix(matrix, 7, 5);
    return 0;
}

void spiralMatrix(int matrix[][5], int n, int m)
{
    int srow = 0, scol = 0;
    int erow = n - 1, ecol = m - 1;
    // Top
    while (srow <= erow && scol <= ecol)
    {
        for (int j = srow; j <= ecol; j++)
        {
            cout << matrix[srow][j] << " ";
        }

        // Right
        for (int j = srow + 1; j <= erow; j++)
        {
            cout << matrix[j][ecol] << " ";
        }

        // Bottom
        for (int j = ecol - 1; j >= scol; j--)
        {
            if (srow == erow)
            {
                break;
            };
            cout << matrix[erow][j] << " ";
        }

        // Left
        for (int j = erow - 1; j >= srow + 1; j--)
        {
            if (scol == ecol)
            {
                break;
            }
            cout << matrix[j][scol] << " ";
        }
        srow++;
        scol++;
        ecol--;
        erow--;
    }
}
