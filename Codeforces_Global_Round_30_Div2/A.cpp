#include <bits/stdc++.h>

using namespace std;

int main()
{

  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }

    int x;
    cin >> x;

    auto it = find(a.begin(), a.end(), x);
    if (it != a.end())
    {
      cout << "YES" << "\n";
      continue;
    }

    int minV = *min_element(a.begin(), a.end());
    int maxV = *max_element(a.begin(), a.end());
    if (x < minV || x > maxV)
    {
      cout << "NO" << "\n";
      continue;
    }

    bool possible = false;
    for (int i = 0; i + 1 < a.size(); i++)
    {
      int minA = min(a[i], a[i + 1]), maxA = max(a[i], a[i + 1]);
      if (x >= minA && x <= maxA)
      {
        possible = true;
        break;
      }
    }

    if (possible)
    {
      cout << "YES" << "\n";
    }
    else
    {
      cout << "NO" << "\n";
    }
  }

  return 0;
}