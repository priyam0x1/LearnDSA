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
    int n = 4, m = 4, key = 160;
    pair<int, int> result = binSearch(matrix, n, m, key);
    cout << "Row : " << result.first + 1 << " \n";
    cout << "Index : " << result.second;
    return 0;
}

pair<int, int> binSearch(int mat[4][4], int n, int m, int key)
{
    for (int i = 0; i < n; i++)
    {
        int start = 0, end = m - 1;
        while (start <= end)
        {
            int mid = (start + end) / 2;
            if (mat[i][mid] == key)
            {
                return {i, mid};
            }
            else if (mat[i][mid] > key)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
    }
    return {-2, 0};
}