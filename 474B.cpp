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

  int m;
  cin >> m;

  vector<int> q(m);
  for (int i = 0; i < m; i++)
  {
    cin >> q[i];
  }

  vector<int> prefix(n);
  prefix[0] = a[0];
  for (int i = 1; i < n; i++)
  {
    prefix[i] = prefix[i - 1] + a[i];
  }

  for (int i = 0; i < m; i++)
  {
    auto it = lower_bound(prefix.begin(), prefix.end(), q[i]);
    int idx = it - prefix.begin();
    cout << idx + 1 << "\n";
  }

  return 0;
}
