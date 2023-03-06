#include <bits/stdc++.h>
using namespace std;
#define ll long long;
int di[] = {0, 0, 1, -1};
int dj[] = {1, -1, 0, 0};

/*
 l -> atleast l points
 r -> atMost r points
 S_all -> all members of the team score exactly S_all points
 S_k -> sum of points in a decreasing order in a team
 */
class Solution
{
public:
    Solution()
    {
        int n, k, r, l, sall, sk;
        cin >> n >> k >> r >> l >> sall >> sk;
        vector<int> res(n);
        res[0] = sk / k + sk % k;
        k--, sk -= res[0], sall -= res[0];
        int remaining = n - 1;
        bool flag = 0;
        for (int i = 1; i < n; i++)
        {
            if (k != 0)
            {
                res[i] = sk / k;
                k--;
                sall -= res[i];
                sk -= res[i];
                remaining--;
                if (!k)
                    flag = 1;
                continue;
            }
            else
            {
                if (flag)
                {
                    res[i] = sall / remaining + sall % remaining;
                    flag = 0;
                }
                else
                    res[i] = sall / remaining;
            }
        }
        for (auto i : res)
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