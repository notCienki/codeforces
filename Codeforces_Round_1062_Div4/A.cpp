#include <bits/stdc++.h>

using namespace std;

int main()
{

  int t;
  cin >> t;

  string answers[t];
  for (int i = 0; i < t; i++)
  {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a == 0 || b == 0 || c == 0 || d == 0)
    {
      answers[i] = "NO";
    }
    else if (b == a && c == b && d == c)
    {
      answers[i] = "YES";
    }
    else
    {
      answers[i] = "NO";
    }
  }

  for (int i = 0; i < t; i++)
  {
    cout << answers[i] << endl;
  }

  return 0;
}