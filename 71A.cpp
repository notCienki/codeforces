#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin >> n;

  string words[n];
  for (int i = 0; i < n; i++)
  {
    string word;
    cin >> word;
    words[i] = word;
  }
  for (int i = 0; i < n; i++)
  {
    string word = words[i];
    int length = size(word);
    if (length > 10)
    {
      cout << word[0] << length - 2 << word[length - 1] << endl;
    }
    else
    {
      cout << word << endl;
    }
  }

  return 0;
}