#include <bits/stdc++.h>
using namespace std;
#define ll long long;
int di[] = {0, 0, 1, -1};
int dj[] = {1, -1, 0, 0};
class Solution
{
    int maxSubArray(vector<int> &nums)
    {
        int res = nums[0];
        int curSum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (curSum < 0)
                curSum = 0;
            curSum += nums[i];
            res = max(curSum, res);
        }
        return res;
    }

public:
    Solution()
    {
        vector<int> arr = {5, 4, -1, 7, 8};
        cout << maxSubArray(arr);
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Solution *x = new Solution();
    delete x;
    return 0;
}