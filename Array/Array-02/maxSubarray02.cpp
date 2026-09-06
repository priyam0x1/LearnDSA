#include <iostream>
using namespace std;

void maxSubarraySum(int *arr, int n);

int main()
{
    int arr[] = {1, 2, 3, -4, -5};
    int size = sizeof(arr) / sizeof(int);
    maxSubarraySum(arr, size);
}

void maxSubarraySum(int *arr, int n)
{
    int maxSum = INT32_MIN;
    for (int start = 0; start < n; start++)
    {
        int currSum = 0;

        for (int end = start; end < n; end++)
        {
            currSum += arr[end];
            maxSum = max(maxSum, currSum);
        }
    }
    cout << "Max Sum : " << maxSum;
}
