#include <iostream>
#include <string.h>
using namespace std;

// sub-sequence sub string
// "abc"->2^3= 8
// "a","b","c","ab","bc","ac","abc"," ";

void findSubSequences(string str, string output, int index)
{
  // base case
  if (index >= str.length())
    // ans jo h, vo output string m build ho chuka h
    cout << "-" << output << endl;
  return;

  // exclude
  findSubSequences(str, output, index + 1);

  // include
  char ch = str[index];
  // pehle character ko store karo

  output.push_back(ch);
  // iske baad aage badho

  findSubSequences(str, output, index + 1);
}

int main()
{

  string str = "abc";
  string output = "";
  int index = 0;

  findSubSequences(str, output, index);

  return 0;
}