#include <bits/stdc++.h>
using namespace std;
#define ll long long;
int di[] = {0, 0, 1, -1};
int dj[] = {1, -1, 0, 0};
class Solution
{
    int maxProduct(vector<int> &nums)
    {
        int res = INT_MIN;
        for (int i : nums)
            res = max(res, i);
        int mn = 1, mx = 1;
        for (int i : nums)
        {
            if (i == 0)
                mn = 1, mx = 1;
            else
            {
                int tmp = mx;
                mx = max(i, max(i * mn, i * mx));
                mn = min(i, min(i * tmp, i * mn));
                res = max(mn, max(mx, res));
            }
        }
        return res;
    }

public:
    Solution()
    {
        vector<int> nums = {2, 3, -2, 4};
        cout << maxProduct(nums);
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