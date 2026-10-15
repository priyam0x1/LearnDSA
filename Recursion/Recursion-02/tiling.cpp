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

    int ans1 = tilingProblem(n - 1); // Vertical Case
    int ans2 = tilingProblem(n - 2); // Horizontal Case

    return ans1 + ans2;
}
