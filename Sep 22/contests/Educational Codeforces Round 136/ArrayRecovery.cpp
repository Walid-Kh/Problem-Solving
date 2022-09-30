#include <bits/stdc++.h>
using namespace std;

pair<int, int> generalSolution(double a, double b, double c)
{
    double delta = b * b - 4 * a * c;
    double x1 = (-b + sqrt(delta)) / (2 * a);
    double x2 = (-b - sqrt(delta)) / (2 * a);
    if (delta >= 0)
        return {x1, x2};
    else
        return {INT_MAX, INT_MAX};
}
class solution
{
public:
    solution()
    {
        int t;
        cin >> t;
        for (int i = 0; i < t; i++)
        {
            double n;
            cin >> n;
            vector<double> arr(n);
            bool flag = 0;
            for (int i = 0; i < n; i++)
            {
                double x;
                cin >> x;
                if (i == 0)
                    arr[i] = x;
                else
                {
                    int a = 1;
                    int b = -2 * arr[i - 1];
                    int c = (pow(arr[i - 1], 2) - pow(x, 2));
                    double delta = b * b - 4 * a * c;
                    double x1 = (-b + sqrt(delta)) / (2 * a);
                    double x2 = (-b - sqrt(delta)) / (2 * a);
                    if (x1 >= 0 && x2 >= 0 && x1 != x2)
                        flag = 1;
                    arr[i] = max(x1, x2);
                }
            }
            if (!flag)
                for (auto i : arr)
                    cout << i << " ";
            else
                cout << -1;
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