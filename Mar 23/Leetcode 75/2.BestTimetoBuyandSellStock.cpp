#include <bits/stdc++.h>
using namespace std;
#define ll long long;
int di[] = {0, 0, 1, -1};
int dj[] = {1, -1, 0, 0};
class Solution
{
    int maxProfit(vector<int> &prices)
    {
        int left = 0, right = 1, mx = 0;
        while (left != prices.size() && right != prices.size())
        {
            if (prices[left] < prices[right])
            {
                mx = max(mx, (prices[right] - prices[left]));
                right++;
            }
            else if (left == right)
                right++;
            else
                left++;
        }
        return mx;
    }

public:
    Solution()
    {
        vector<int> prices = {1, 2, 4, 2, 5, 7, 2, 4, 9, 0, 9};
        cout << maxProfit(prices);
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