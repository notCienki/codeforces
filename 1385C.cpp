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

    int idx = n - 1;
    while (idx > 0 && a[idx - 1] >= a[idx])
    {
      idx--;
    }
    while (idx > 0 && a[idx - 1] <= a[idx])
    {
      idx--;
    }
    cout << idx << "\n";
  }

  return 0;
}