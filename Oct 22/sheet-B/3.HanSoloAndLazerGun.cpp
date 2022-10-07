#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    solution()
    {
        int n, x0, y0;
        map<string, int> coordinates;
        set<pair<int, int>> coord;
        cin >> n >> x0 >> y0;
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            if (coord.find({x, y}) != coord.end())
                continue;
            if (x - x0 == 0)
                coordinates["y=" + to_string(y0)]++;
            else if (y - y0 == 0)
                coordinates["x=" + to_string(x0)]++;
            else
            {
                auto slope = (((float)y - y0) / (x - x0));
                coordinates[to_string(slope) + "x" + to_string(y0 - slope * x0)]++;
            }
            coord.insert({x, y});
        }
        cout << coordinates.size();
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