#include <bits/stdc++.h>
using namespace std;
void solution()
{
    int n;
    cin >> n;
    vector<vector<int>> students(3);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        switch (x)
        {
        case 1:
            students[0].push_back(i + 1);
            break;
        case 2:
            students[1].push_back(i + 1);
            break;
        case 3:
            students[2].push_back(i + 1);
            break;
        }
    }
    int numberOfTeams = min(students[0].size(), min(students[1].size(), students[2].size()));
    cout << numberOfTeams << "\n";
    for (int i = 0; i < numberOfTeams; i++)
    {
        cout << students[0].back() << " " << students[1].back() << " " << students[2].back() << '\n';
        students[0].pop_back();
        students[1].pop_back();
        students[2].pop_back();
    }
}
int main()
{
    solution();
    return 0;
}