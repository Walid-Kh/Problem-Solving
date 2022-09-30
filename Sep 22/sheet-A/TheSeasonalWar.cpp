#include <bits/stdc++.h>
using namespace std;
class solution
{
    bool matrix[25][25];
    bool visited[25][25];
    int n;
    void dfs(int i, int j)
    {
        int di[] = {0, 0, 1, 1, 1, -1, -1, -1};
        int dj[] = {1, -1, 0, 1, -1, 0, 1, -1};

        visited[i][j] = 1;
        for (int dir = 0; dir < 8; dir++)
        {
            int childI = i + di[dir];
            int childJ = j + dj[dir];
            bool baseCondition = childI >= 0 && childI < n && childJ >= 0 && childJ < n;
            if (baseCondition && !visited[childI][childJ] && matrix[childI][childJ])
                dfs(childI, childJ);
        }
    }

public:
    solution()
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            string x;
            cin >> x;
            for (int j = 0; j < n; j++)
            {
                if (x[j] == '1')
                    matrix[i][j] = 1;
                else
                    matrix[i][j] = 0;
                visited[i][j] = 0;
            }
        }
        int res = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (!visited[i][j] && matrix[i][j] == 1)
                {
                    dfs(i, j);
                    res++;
                }
            }
        }
        cout << res;
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