#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin >> n;

  int x = 0;
  for (int i = n; i > 0; i--)
  {
    char a, b, c;
    cin >> a >> b >> c;
    if (a == '+' || b == '+')
      x++;
    else
      x--;
  }
  cout << x;
  return 0;
}