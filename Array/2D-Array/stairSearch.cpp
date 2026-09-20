#include <iostream>
using namespace std;

pair<int, int> binSearch(int mat[4][4], int n, int m, int key);

int main()
{
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};
    int n = 4, m = 4, key = 8;
    pair<int, int> result = binSearch(matrix, n, m, key);
    cout << "Row : " << result.first + 1 << " \n";
    cout << "Index : " << result.second;
    return 0;
}

pair<int, int> binSearch(int mat[4][4], int n, int m, int key)
{
    int row = 0, col = m - 1;
    while (row < n && col >= 0)
    {
        if (mat[row][col] == key)
        {
            return {row, col};
        }
        else if (mat[row][col] > key)
        {
            col--;
        }
        else
        {
            row++;
        }
    }
    return {-2, 0};
}