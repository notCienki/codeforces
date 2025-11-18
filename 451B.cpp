#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  vector<int> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  int l = 0, r = 0;
  for (int i = 0; i < n - 1; i++)
  {
    if (a[i] > a[i + 1])
    {
      l = i;
      break;
    }
  }
  for (int i = n - 2; i >= 0; i--)
  {
    if (a[i] > a[i + 1])
    {
      r = i + 1;
      break;
    }
  }
  reverse(a.begin() + l, a.begin() + r + 1);
  if (is_sorted(a.begin(), a.end()))
  {
    cout << "yes" << "\n"
         << l + 1 << " " << r + 1;
  }
  else
  {
    cout << "no";
  }

  return 0;
}