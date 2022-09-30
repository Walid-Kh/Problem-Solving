#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    solution()
    {
        char matrix[1001][1001];
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> matrix[i][j];
        set<int> x;
        bool flag = 1;
        for (int i = 0; i < n; i++)
        {
            int g = -1;
            int s = -1;
            for (int j = 0; j < m; j++)
            {
                if (matrix[i][j] == 'G')
                    g = j;
                if (matrix[i][j] == 'S')
                    s = j;
            }
            if (g > s)
            {
                cout << -1;
                flag = 0; 
                break;
            }
            else
                x.insert(g - s);
        }
        if (flag)
            cout << x.size();
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