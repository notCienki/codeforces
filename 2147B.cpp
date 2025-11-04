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

    for (int p = 0; p < n; p++)
    {
      cout << n - p << " ";
    }

    cout << n << " ";

    for (int p = 1; p < n; p++)
    {
      cout << p << " ";
    }

    cout << "\n";
  }

  return 0;
}