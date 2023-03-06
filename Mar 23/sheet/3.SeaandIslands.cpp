#include <bits/stdc++.h>
using namespace std;
#define ll long long;
int di[] = {0, 0, 1, -1};
int dj[] = {1, -1, 0, 0};
class Solution
{
public:
    Solution()
    {
        int n, k;
        cin >> n >> k;
        vector<vector<char>> arr(n, vector<char>(n, 'S'));
        int maxIslands = ceil(n * n / 2.0);
        if (k > maxIslands)
        {
            cout << "NO";
            return;
        }
        else
        {
            int startPosition = 0;
            int curIslands = 0;
            for (int i = 0; i < n; i++)
            {
                for (int j = startPosition; j < n; j += 2)
                {
                    if (curIslands == k)
                    {
                        // I am sorry
                        goto e;
                    }
                    arr[i][j] = 'L';
                    curIslands++;
                }
                if (i % 2)
                    startPosition = 0;
                else
                    startPosition = 1;
            }
        e:
            cout << "YES" << '\n';
            for (auto &i : arr)
            {
                for (auto &j : i)
                    cout << j;
                cout << '\n';
            }
        }
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