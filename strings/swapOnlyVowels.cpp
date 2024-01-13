#include <bits/stdc++.h>
using namespace std;

// swap only vowels in a given string

bool isvowel(char ch)
{
  ch = tolower(ch);

  if (ch == 'a' || ch == 'e' || ch == 'i' || ch = 'o' || ch = 'u')
  {
    return true;
  }
  return false;
}

string swapOnlyVowels(string s)
{

  int l = 0;
  int h = s.size() - 1;

  while (l < h)
  {
    if (isvowel(s[l]) && isvowel(s[h]))
    {
      swap(s[l], s[h]);
    }
    else if (isvowel(s[l]) == 0)
    {
      l++;
    }
    else
    {
      h--;
    }
  }

  return s;
}

int main()
{

  string s = "code";
  swapOnlyVowels(s);
  return 0;
}