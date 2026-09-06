#include <iostream>
using namespace std;

void maxSubArraySum(int *arr, int n);

int main()
{
    int arr[] = {-1, -2, 3, 4, 5, -8, 5};
    int size = sizeof(arr) / sizeof(int);

    maxSubArraySum(arr, size);
    return 0;
}

void maxSubArraySum(int *arr, int n)
{
    int currSum = 0;
    int maxSum = INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        maxSum = max(currSum, maxSum);
        if (currSum < 0)
        {
            currSum = 0;
        }
    }
    cout << "Maximum subarray sum : " << maxSum;
}
