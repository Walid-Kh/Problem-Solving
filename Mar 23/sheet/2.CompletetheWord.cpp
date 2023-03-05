// Complete the World
// https://codeforces.com/contest/716/problem/B
#include <bits/stdc++.h>
using namespace std;
#define ll long long;
int di[] = {0, 0, 1, -1};
int dj[] = {1, -1, 0, 0};
class Solution
{
public:
  Solution()
  {
    string word;
    bool flag = 0;
    cin >> word;
    if (word.length() < 26)
    {
      cout << -1;
      return;
    }
    else
    {
      for (int i = 0; i <= word.length() - 26; i++)
      {
        set<char> Set;
        set<char> unVis;
        int qMark = 0;
        for (int j = i; j < i + 26; j++)
        {
          if (word[j] == '?')
            qMark++;
          else
            Set.insert(word[j]);
        }
        if (Set.size() + qMark == 26)
        {
          flag = 1;
          if (qMark != 0)
          {
            for (char j = 'A'; j <= 'Z'; j++)
              if (Set.find(j) == Set.end())
                unVis.insert(j);
            for (int j = i, a = 0; a < 26; j++, a++)
            {
              if (word[j] == '?')
              {
                word[j] = *unVis.begin();
                unVis.erase(unVis.begin());
              }
            }
          }
        }
      }
      for (auto &i : word)
      {
        if (i == '?')
          i = 'A';
      }
      if (flag)
        cout << word;
      else
        cout << -1;
    }
  }
};
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  Solution *x = new Solution();
  delete x;
  return 0;
}