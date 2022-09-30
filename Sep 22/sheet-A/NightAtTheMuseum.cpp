#include <bits/stdc++.h>
using namespace std;
void solution()
{
  char embosser[26];
  int currentPosition = 0;
  for (int i = 0; i < 26; i++)
  {
    embosser[i] = 'a' + i;
  }
  string word;
  cin >> word;
  int res = 0;
  for (auto i : word)
  {
    int minPos = 0, minNeg = 0;
    for (int j = currentPosition; embosser[j] != i; j++)
    {
      if (j == 25)
        j = -1;
      minPos++;
    }
    for (int j = currentPosition; embosser[j] != i; j--)
    {
      if (j == 0)
        j = 26;
      minNeg++;
    }
    res += min(minPos, minNeg);
    currentPosition = i - 97;
  }
  cout << res;
}
int main()
{
  solution();
  return 0;
}