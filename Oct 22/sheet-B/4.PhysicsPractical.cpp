#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    solution()
    {
        /* freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout); */
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int &i : nums)
            cin >> i;
        sort(nums.begin(), nums.end());
        int ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int x = upper_bound(nums.begin(), nums.end(), nums[i] * 2) - nums.begin();
            ans = min(ans, i + n - x);
        }
        cout << ans;
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solution *x = new solution();
    delete x;
    return 0;
}