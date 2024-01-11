#include <iostream>
using namespace std;

// last occurance of a character
// Ex- "abcdeghdyui"=> last occurance of "d" is 7

void lastOccurance(string &s, int index, char target)
{
  if (index >= s.size())
    return;

  if (s[index] == target)
  {
    cout << index;
  }

  lastOccurance(s, (index + 1), target);
}

int main()
{
  string s = "abdgbcdjjir";
  int index = 0;
  char target = 'b';

  lastOccurance(s, index, target);
  // cout << ans;

  return 0;
}