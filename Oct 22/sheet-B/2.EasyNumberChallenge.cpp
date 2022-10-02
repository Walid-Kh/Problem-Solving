#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    solution()
    {
        long long res = 0;
        int a, b, c;
        cin >> a >> b >> c;
        unordered_map<int, int> x;
        for (int i = 1; i <= a; i++)
        {
            for (int j = 1; j <= b; j++)
            {
                for (int k = 1; k <= c; k++)
                {
                    if (x[i * j * k] == 0)
                    {
                        set<int> multiples;
                        for (int l = 1; l <= sqrt(i * j * k); l++)
                            if ((i * j * k) % l == 0)
                            {
                                multiples.insert((i * j * k) / l);
                                multiples.insert(l);
                            }
                        res += multiples.size();
                        res %= 1073741824;
                        x[i*j*k] = multiples.size();
                    }
                    else 
                    {
                        res += x[i*j*k];
                        res %= 1073741824;
                    }
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