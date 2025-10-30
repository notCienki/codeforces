#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  cin >> t;

  vector<int> answers(t);
  for (int i = 0; i < t; i++)
  {
    long long Rzero, X, D;
    int n;
    cin >> Rzero >> X >> D >> n;
    string s;
    cin >> s;

    long long L, R;
    int ans = 0;
    L = Rzero;
    R = Rzero;

    for (int j = 0; j < n; j++)
    {
      char c = s[j];
      if (c == '1')
      {
        ans++;
        L = max(0LL, L - D);
        R = R + D;
      }
      else
      {
        long long Rnew = min(R, X - 1);
        if (L <= Rnew)
        {
          ans++;
          L = max(0LL, L - D);
          R = Rnew + D;
        }
      }
    }
    answers[i] = ans;
  }

  for (int i = 0; i < t; i++)
  {
    cout << answers[i] << endl;
  }

  return 0;
}