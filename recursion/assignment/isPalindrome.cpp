#include <iostream>
using namespace std;

// isPlindrome
bool isPalindrome(string &s, int start, int end)
{

  // base case
  if (start >= end)
    return 0;

  if (s[start] == s[end])
    return true;

  // baaki recursion sambhal lega
  return isPalindrome(s, start + 1, end - 1);
}

int main()
{
  string str = "racecar";
  int s = 0;
  int e = str.size() - 1;
  cout << isPalindrome(str, s, e);
  return 0;
}