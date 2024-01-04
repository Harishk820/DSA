#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Swap only characters in a given string

string swapOnlyCharacters(string &str)
{
  int s = 0, e = str.size() - 1;
  while (s < e)
  {
    if ((isalpha(str[s]) && isalpha(str[e])))
    {
      swap(str[s], str[e]);
      s++;
      e--;
    }
    else if (!isalpha(str[s]))
    {
      s++;
    }
    else if (!isalpha(str[e]))
    {
      e--;
    }
  }

  return str;
}

int main()
{

  string s = "hswd8bn!sf@mv!";
  cout << "swaped character string is: " << swapOnlyCharacters(s);

  // cout << s;

  return 0;
}