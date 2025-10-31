#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  cin >> t;

  for (int i = 0; i < t; i++)
  {
    int n;
    cin >> n;

    string s;
    cin >> s;

    bool found = false;

    for (int mask = 0; mask < (1 << n); mask++)
    {
      string p, x;
      vector<int> index;

      for (int j = 0; j < n; j++)
      {
        if (mask & (1 << j))
        {
          p += s[j];
          index.push_back(j + 1);
        }
        else
        {
          x += s[j];
        }
      }
      string prim = p;
      sort(prim.begin(), prim.end());

      string rev = x;
      reverse(rev.begin(), rev.end());

      if (p == prim && x == rev)
      {
        cout << p.size() << "\n";
        for (int idx : index)
          cout << idx << " ";
        cout << "\n";
        found = true;
        break;
      }
    }
    if (!found)
    {
      cout << -1 << "\n";
    }
  }

  return 0;
}