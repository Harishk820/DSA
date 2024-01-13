#include <iostream>
#include <string.h>
using namespace std;

bool checkPlindrome(char ch[], int strlength)
{
  int i = 0;
  int j = strlength - 1;
  while (i <= j)
  {
    if (ch[i] == ch[j])
    {
      i++;
      j--;
    }
    else
    {
      return false;
    }
    // agar yha pahuche h to sare character match kar gye h
    return true;
  }
}

int main()
{
  char ch[100];
  cin >> ch;
  cout << "Palindrome result: " << checkPlindrome(ch, strlen(ch));
  return 0;
}