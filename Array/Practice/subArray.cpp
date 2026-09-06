#include <iostream>
using namespace std;

int maxSubArray(int *arr, int n);

int main()
{
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int size = sizeof(arr) / sizeof(int);
    int sum = maxSubArray(arr, size);
    cout << "Maximum Subarray Sum : " << sum;
    return 0;
}

int maxSubArray(int *arr, int n)
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
    return maxSum;
}
