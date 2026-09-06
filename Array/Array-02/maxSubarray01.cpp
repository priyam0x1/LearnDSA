#include <iostream>
using namespace std;

void maxSubarray(int *arr, int n);

int main()
{
    int arr[] = {1, 2, -3, -4, 5};
    int size = sizeof(arr) / sizeof(int);
    maxSubarray(arr, size);
    return 0;
}

void maxSubarray(int *arr, int n)
{
    int maxSum = INT32_MIN;
    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            int currSum = 0;
            for (int i = start; i <= end; i++)
            {
                currSum += arr[i];
            }
            cout << currSum << ",  ";
            maxSum = max(maxSum, currSum);
        }
        cout << endl;
    }
    cout << "Max Possible subarray sum : " << maxSum;
}
