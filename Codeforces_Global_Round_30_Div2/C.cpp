#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];

    vector<int> b(m), c(m);
    for (int i = 0; i < m; i++)
      cin >> b[i];
    for (int i = 0; i < m; i++)
      cin >> c[i];

    vector<pair<int, int>> bc;
    for (int i = 0; i < m; i++)
      bc.push_back({b[i], c[i]});

    sort(a.begin(), a.end());
    sort(bc.begin(), bc.end());

    int killed = 0;
    bool newSwords = true;

    while (newSwords && !bc.empty())
    {
      newSwords = false;
      vector<pair<int, int>> remaining;
      int i = 0;

      for (auto [life, reward] : bc)
      {

        while (i < a.size() && a[i] < life)
          i++;

        if (i < a.size())
        {
          killed++;
          if (reward > 0)
          {
            a.push_back(max(a[i], reward));
            newSwords = true;
          }
          i++;
        }
        else
        {
          remaining.push_back({life, reward});
        }
      }

      bc = remaining;

      if (newSwords)
        sort(a.begin(), a.end());
    }

    cout << killed << "\n";
  }

  return 0;
}
