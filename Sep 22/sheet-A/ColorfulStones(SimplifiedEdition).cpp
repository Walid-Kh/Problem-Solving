#include <bits/stdc++.h>
using namespace std;
void solution()
{
    string path, instructions;
    cin >> path >> instructions;
    int current = 1;
    for (auto i : instructions)
    {
        if (path[current - 1] == i)
            current++;
    }
    cout << current;
}
int main()
{
    solution();
    return 0;
}