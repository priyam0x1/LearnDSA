#include <iostream>
using namespace std;

int tilingProblem(int n);

int main()
{
    cout << tilingProblem(4);
    return 0;
}

int tilingProblem(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }

    return tilingProblem(n - 1) + tilingProblem(n - 1);
}
