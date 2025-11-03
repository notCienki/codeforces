#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    int cnt0 = 0, cnt1 = 0, cnt2 = 0;
    for (char c : s)
    {
      if (c == '0')
      {
        cnt0++;
      }
      else if (c == '1')
      {
        cnt1++;
      }
      else
      {
        cnt2++;
      }
    }

    if (k == n)
    {
      cout << string(n, '-') << "\n";
      continue;
    }

    string answer(n, '+');

    for (int i = 0; i < n; i++)
    {
      int pos = i + 1;
      if (pos <= cnt0 || pos > n - cnt1)
      {
        answer[i] = '-';
      }
      else if ((pos > cnt0 && pos <= cnt0 + cnt2) || (pos <= n - cnt1 && pos > n - (cnt1 + cnt2)))
      {
        answer[i] = '?';
      }
    }

    cout << answer << "\n";
  }
  return 0;
}
