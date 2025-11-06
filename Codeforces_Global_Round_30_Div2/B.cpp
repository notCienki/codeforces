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

    if (a[0] == 1)
    {
      cout << a[0] << " " << a[1] << "\n";
      continue;
    }

    vector<int> even;
    for (int x : a)
    {
      if (x % 2 == 0)
        even.push_back(x);
      if (even.size() == 2)
        break;
    }
    if (even.size() == 2)
    {
      cout << even[0] << " " << even[1] << "\n";
      continue;
    }

    bool found = false;
    for (int i = 0; i < n - 1; i++)
    {
      int x = a[i];
      for (int j = i + 1; j < n; j++)
      {
        int y = a[j];
        if ((y % x) % 2 == 0)
        {
          cout << x << " " << y << "\n";
          found = true;
          break;
        }
      }
      if (found)
      {
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