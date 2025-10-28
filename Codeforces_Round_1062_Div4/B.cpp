#include <bits/stdc++.h>

using namespace std;

int main()
{
  int q;
  cin >> q;

  string answers[q];

  for (int i = 0; i < q; i++)
  {
    int n;
    string s, t;
    cin >> n >> s >> t;

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    if (s == t)
    {
      answers[i] = "YES";
    }
    else
    {
      answers[i] = "NO";
    }
  }

  for (int i = 0; i < q; i++)
  {
    cout << answers[i] << endl;
  }
  return 0;
}