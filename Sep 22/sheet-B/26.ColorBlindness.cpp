#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    solution()
    {
        int t;
        cin >> t;
        for (int i = 0; i < t; i++)
        {
            int n;
            cin >> n;
            vector<vector<char>> grid(2, vector<char>(n));
            for (int i = 0; i < 2; i++)
                for (int j = 0; j < n; j++)
                    cin >> grid[i][j];
            for (int i = 0; i < 2; i++)
                for (int j = 0; j < n; j++)
                    if (grid[i][j] == 'G')
                        grid[i][j] = 'B';
            if (grid[0] == grid[1])
                cout << "YES";
            else
                cout << "NO";
            cout << '\n';
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