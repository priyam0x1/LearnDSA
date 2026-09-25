#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> arr, int target);

int main()
{
    vector<int> vec1 = {2, 7, 11, 15};
    int target = 18;
    vector<int> ans = pairSum(vec1, target);
    cout << ans[0] << " " << ans[1];
    return 0;
}

vector<int> pairSum(vector<int> arr, int target)
{
    int st = 0, end = arr.size() - 1, currSum = 0;
    vector<int> ans;
    while (st < end)
    {
        currSum = arr[st] + arr[end];
        if (currSum == target)
        {
            ans.push_back(st);
            ans.push_back(end);
            return ans;
        }
        else if (currSum < target)
        {
            st++;
        }
        else
        {
            end--;
        }
    }
    return ans;
}
