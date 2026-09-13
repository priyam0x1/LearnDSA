#include <iostream>
using namespace std;

void diagonal(int mat[3][3], int n);

int main()
{
    int matrix[3][3] = {
        {2, 4, 6},
        {1, 5, 9},
        {8, 3, 7}};
    int n = 3, m = 3;
    diagonal(matrix, n);
    return 0;
}

void diagonal(int mat[3][3], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += mat[i][i];
        if (i != n - i - 1)
        {
            sum += mat[i][n - i - 1];
        }
    }

    cout << "Diagonal Sum : " << sum;
}
