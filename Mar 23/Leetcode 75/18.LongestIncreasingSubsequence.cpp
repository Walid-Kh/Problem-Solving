#include <bits/stdc++.h>
using namespace std;
#define ll long long;
int di[] = {0, 0, 1, -1};
int dj[] = {1, -1, 0, 0};
class Solution
{
    int LIS(const vector<int> &arr)
    {
        int mx = INT_MIN;
        int n = arr.size();
        vector<int> dp(n, 0);
        for (int i = 0; i < n; i++)
        {
            int curRes = 0;
            for (int j = i - 1; j >= 0; j--)
            {
                if (arr[i] > arr[j])
                    curRes = max(curRes, dp[j]);
            }
            mx = max(curRes + 1, mx);
            dp[i] = curRes + 1;
        }
        return mx;
    }

public:
    Solution()
    {
        vector<int> arr = {10, 9, 2, 5, 3, 7, 101, 18};
        cout << LIS(arr);
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