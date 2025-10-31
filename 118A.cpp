#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s;
  cin >> s;
  transform(s.begin(), s.end(), s.begin(), ::tolower);
  string preAns = "";
  for (char c : s)
  {
    switch (c)
    {
    case 'a':
    case 'o':
    case 'y':
    case 'e':
    case 'u':
    case 'i':
      break;

    default:
      preAns += c;
      break;
    }
  }

  string answer = "";
  for (char c : preAns)
  {
    answer += '.';
    answer += c;
  }

  cout << answer << '\n';

  return 0;
}