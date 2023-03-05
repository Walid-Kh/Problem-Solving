#include <bits/stdc++.h>
using namespace std;
#define ll long long;
int di[] = {0, 0, 1, -1};
int dj[] = {1, -1, 0, 0};
class Solution
{
    int findMin(vector<int> &nums)
    {
        int l = 0, r = nums.size() - 1;
        int m = (r + l) / 2;
        int res = nums[0];
        while (l <= r)
        {
            if (nums[r] > nums[l])
                res = min(res, nums[l]);
            m = (l + r) / 2;
            res = min(res, nums[m]);
            if (nums[m] >= nums[l])
                l = m + 1;
            else
                r = m - 1;
        }
        return res;
    }

public:
    Solution()
    {
        vector<int> nums = {2, 1};
        cout << findMin(nums);
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