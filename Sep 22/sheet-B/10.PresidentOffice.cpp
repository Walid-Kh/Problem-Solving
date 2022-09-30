#include <bits/stdc++.h>
using namespace std;
class solution
{
    char president;
    int n, m;
    char matrix[100][100];
    set<char> deputies;
    void search(int i, int j)
    {
        int di[] = {0, 0, 1, -1};
        int dj[] = {1, -1, 0, 0};
        for (int dir = 0; dir < 4; dir++)
        {
            int childI = i + di[dir];
            int childJ = j + dj[dir];
            bool condition = childI >= 0 && childI < n && childJ >= 0 && childJ < m;
            if (condition && matrix[childI][childJ] != president && matrix[childI][childJ] != '.')
                deputies.insert(matrix[childI][childJ]);
        }
    }

public:
    solution()
    {
        cin >> n >> m >> president;
        for (int i = 0; i < n; i++)
        {
            string x;
            cin >> x;
            for (int j = 0; j < m; j++)
                matrix[i][j] = x[j];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (matrix[i][j] == president)
                {
                    search(i, j);
                }
            }
        }
        cout << deputies.size();
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solution();
    return 0;
}