#include <bits/stdc++.h>
using namespace std;
int di[] = {0, 0, 1, -1};
int dj[] = {1, -1, 0, 0};
class solution
{
public:
    solution()
    {
        int t;
        cin >> t;
        while (t--)
        {
            int n;
            cin >> n;
            vector<int> nums(n);
            vector<char> word(n);
            map<int, char> rec;
            for (int i = 0; i < n; i++)
                cin >> nums[i];
            for (int i = 0; i < n; i++)
                cin >> word[i];
            bool flag = 1;
            for (int i = 0; i < n; i++)
            {
                if (rec.find(nums[i]) != rec.end() && rec[nums[i]] != word[i])
                {
                    flag = 0;
                    break;
                }
                else
                    rec[nums[i]] = word[i];
            }
            if (flag)
                cout << "YES";
            else
                cout << "NO";
            cout << "\n";
        }
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