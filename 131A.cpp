#include <bits/stdc++.h>

using namespace std;

int main()
{
  string word;
  cin >> word;

  bool allupper = true;
  bool restupper = true;

  for (char c : word)
  {
    if (!isupper(c))
    {
      allupper = false;
      break;
    }
  }

  for (int i = 1; i < word.size(); i++)
  {
    if (!isupper(word[i]))
    {
      restupper = false;
      break;
    }
  }

  if (allupper || (restupper && islower(word[0])))
  {
    for (char &c : word)
    {
      if (islower(c))
      {
        c = toupper(c);
      }
      else
      {
        c = tolower(c);
      }
    }
  }

  cout << word << "\n";
  return 0;
}