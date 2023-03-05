#include <bits/stdc++.h>
using namespace std;
#define ll long long;
int di[] = {0, 0, 1, -1};
int dj[] = {1, -1, 0, 0};
class Solution
{
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> prefix(nums.size(), 0);
        vector<int> postfix(nums.size(), 0);
        vector<int> res(nums.size(), 0);
        prefix[0] = nums[0];
        postfix[n - 1] = nums[n - 1];
        for (int i = 1; i < n; i++)
            prefix[i] = prefix[i - 1] * nums[i];
        for (int i = n - 2; i >= 0; i--)
            postfix[i] = postfix[i + 1] * nums[i];
        res[0] = postfix[1];
        res[n - 1] = prefix[n - 2];
        for (int i = 1; i < n - 1; i++)
        {
            res[i] = postfix[i + 1] * prefix[i - 1];
        }
        return res;
    }

public:
    Solution()
    {
        vector<int> nums = {1, 2, 3, 4};
        vector<int> res = productExceptSelf(nums);
        for (int i : res)
            cout << i << " ";
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