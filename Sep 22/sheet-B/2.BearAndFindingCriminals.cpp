#include <bits/stdc++.h>
using namespace std;
void solution()
{
  int n, a;
  cin >> n >> a;
  a--;
  vector<int> cities(n);
  for (int i = 0; i < n; i++)
    cin >> cities[i];
  int prev = a, next = a, res = 0;
  while (prev >= 0 || next < n)
  {
    bool prevCondition = prev >= 0;
    bool nextCondition = next < n;
    int x = (prevCondition ? cities[prev] : 0) + (nextCondition ? cities[next] : 0);
    if (prev == next && x == 2)
      res++;
    else if (x == 1 && (prevCondition == !nextCondition))
      res++;
    else if (x == 2)
      res += 2;
    prev--;
    next++;
  }
  cout << res;
}
int main()
{
  solution();
  return 0;
}