#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    solution()
    {
        double n, m, k;

        cin >> n;
        set<double> x;
        for (double i = 0; i < n; i++)
        {
            double h;
            cin >> h;
            x.insert(h);
        }
        cin >> m;
        set<double> y;
        for (double i = 0; i < m; i++)
        {
            double h;
            cin >> h;
            y.insert(h);
        }
        cin >> k;
        set<double> z;
        for (double i = 0; i < k; i++)
        {
            double h;
            cin >> h;
            z.insert(h);
        }
        double a, b;
        cin >> a >> b;
        double res = sqrt(pow((*x.rbegin()), 2) / ((a * (*z.begin()) / (b * (*y.rbegin()))) + 1));
        cout.precision(10);
        cout << fixed << res;
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