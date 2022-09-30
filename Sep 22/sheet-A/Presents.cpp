#include <bits/stdc++.h>
using namespace std;
void solution()
{
  int n;
  cin >> n;
  map<int, int> pairs;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    pairs.insert(make_pair(x, i + 1));
  }
  for (int i = 0; i < n; i++)
  {
    cout << pairs.at(i + 1) << ' ';
  }
}
int main()
{
  solution();
  return 0;
}