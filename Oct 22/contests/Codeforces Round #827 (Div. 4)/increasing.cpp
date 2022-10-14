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
        for (int j = 0; j < t; j++)
        {
            int n;
            cin >> n;
            set < int > s ;
            bool flag = 1; 
            for (int i = 0; i < n; i++)
            {
                int x; 
                cin >> x;
                if (s.find(x) == s.end())
                    s.insert(x);
                else 
                    flag = 0; 
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