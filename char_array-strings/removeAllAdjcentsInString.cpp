#include <iostream>
#include <string.h>
using namespace std;
/*

Input: s = "abbaca"
Output: "ca"
Explanation:
For example, in "abbaca" we could remove "bb" since the letters
 are adjacent and equal, and this is the only possible move.
 The result of this move is that the string is "aaca",
 of which only "aa" is possible, so the final string is "ca".
*/

void removeAllAdjecents(string s)
{
  int index = 0;
  string ans = "";

  while (index < s.length())
  {
    // comparing rithmost element in ans and element in s
    if (ans[ans.length() - 1] == s[index])
    {
      // pop
      ans.pop_back();
    }
    else
    {
      ans.push_back(s[index]);
    }
    index++;
  }
  cout << "final result is: " << ans;
}

int main()
{
  string str = "abbaca";
  removeAllAdjecents(str);
  return 0;
}