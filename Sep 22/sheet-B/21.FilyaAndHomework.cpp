#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    solution()
    {
        int n;
        cin >> n;
        set<unsigned long long> arr;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            arr.insert(x);
        }
        int size = arr.size();
        if (size > 3 || (arr.size() == 3 && ((*arr.rbegin()) - (*(++arr.begin())) != (*(++arr.begin())) - (*(arr.begin())))) )
            cout << "NO";
        else
            cout << "YES";
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