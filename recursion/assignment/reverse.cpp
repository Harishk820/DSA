#include <iostream>
using namespace std;

// reverse using recursion

void reverse(string &str, int start, int end)
{
  // base case
  if (start >= end)
    return;

  // processing

  swap(str[start], str[end]);

  reverse(str, start + 1, end - 1);
}

int main()
{
  string str = "harish";
  int start = 0;
  int end = str.size() - 1;

  reverse(str, start, end);
  cout << str; // main str change hogi coz by refrence call mari h

  return 0;
}