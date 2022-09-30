#include <bits/stdc++.h>
using namespace std;
void solution()
{
    int n, m;
    cin >> n >> m;
    map<int, set<int>> students;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        students[x].insert(y);
        students[y].insert(x);
    }
    int res = 0;
    int group = 0;
    while (students.size())
    {
        bool flag = 0;
        vector<map<int, std::set<int>>::iterator> toBeRemoved;
        for (auto it = students.begin(); it != students.end(); ++it)
        {
            if ((*it).second.size() == 1)
            {
                toBeRemoved.push_back(it);
                flag = 1;
            }
        }
        for (auto i : toBeRemoved)
        {
            auto connected = *((*i).second.begin());
            students[connected].erase((*i).first);
            students.erase(i);
        }
        if (!flag)
            break;
        else
            res++;
    }
    cout << res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solution();
    return 0;
}