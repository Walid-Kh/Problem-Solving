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
        for (int te = 0; te < t; te++)
        {
            vector<string> mat(8);
            for (int i = 0; i < 8; i++)
                cin >> mat[i];
            char res = ' ';
            char prev = 'R';
            for (int i = 0; i < 8; i++)
            {
                if (mat[i] == "RRRRRRRR")
                    res = 'R';
            }
            for (int i = 0; i < 8; i++)
            {
                bool emptyFlag = 0;
                string x;
                for (int j = 0; j < 8; j++)
                {
                    if (mat[j][i] == '.')
                    {
                        emptyFlag = 1;
                        break;
                    }
                    x += mat[j][i];
                }
                if (!emptyFlag && x == "BBBBBBBB")
                    res = 'B';
            }
            cout << res << '\n';
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