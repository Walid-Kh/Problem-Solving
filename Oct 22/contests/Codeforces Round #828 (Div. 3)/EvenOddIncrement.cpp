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
            int n, q;
            cin >> n >> q;
            long long even = 0;
            long long odd = 0;
            int numE = 0;
            int numO = 0;
            for (int i = 0; i < n; i++)
            {
                int x;
                cin >> x;
                if (x % 2 == 0)
                {
                    even += x;
                    numE++;
                }
                else
                {
                    odd += x;
                    numO++;
                }
            }
            for (int i = 0; i < q; i++)
            {
                int type, num;
                cin >> type >> num;
                if (num % 2 && type == 0)
                {
                    odd += even + num * numE;
                    even = 0;
                    numO += numE;
                    numE = 0;
                }
                else if (num % 2 && type == 1)
                {
                    even += odd + num * numO;
                    numE += numO;
                    odd = 0;
                    numO = 0;
                }
                else if (num % 2 == 0 && type == 0)
                    even += numE * num;
                else
                    odd += numO * num;
                cout << even + odd << '\n';
            }
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