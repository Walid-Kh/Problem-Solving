#include <bits/stdc++.h>
using namespace std;
#define ll long long;
int di[] = {0, 0, 1, -1};
int dj[] = {1, -1, 0, 0};
class Solution
{
    int search(vector<int> &nums, int target)
    {
        int l = 0, r = nums.size() - 1;
        int m = (r + l) / 2;
        int res = 0;
        while (l <= r)
        {
            if (nums[r] > nums[l])
                res = nums[res] > nums[l] ? l : res;
            m = (l + r) / 2;
            res = nums[res] > nums[m] ? m : res;
            if (nums[m] >= nums[l])
                l = m + 1;
            else
                r = m - 1;
        }
        int l1 = res, r1 = nums.size() - 1, m1 = (r1 + l1) / 2;
        int l2 = 0, r2 = res - 1, m2 = (l2 + r2) / 2;
        while (l1 <= r1)
        {
            m1 = (r1 + l1) / 2;
            if (nums[m1] == target)
                return m1;
            else if (nums[m1] >= target)
                r1 = m1 - 1;
            else
                l1 = m1 + 1;
        }
        while (l2 <= r2)
        {
            m2 = (r2 + l2) / 2;
            if (nums[m2] == target)
                return m2;
            else if (nums[m2] > target)
                r2 = m2 - 1;
            else
                l2 = m2 + 1;
        }
        return -1;
    }

public:
    Solution()
    {
        vector<int> nums = {2, 1};
        int target = 3;
        cout << search(nums, target);
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