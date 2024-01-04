#include <bits/stdc++.h>
using namespace std;

// M-2 -> using frequency table

bool validAnagram2(string str1, string str2)
{
  // creating hash of 256 char
  int frequencyTable[256] = {0};

  // incrementing the ascii value at every position found in string
  for (int i = 0; i < str1.size(); i++)
  {
    frequencyTable[(int)str1[i]]++;
  }
  //  decremanting the value of stiring in order to check if value again became 0
  for (int i = 0; i < str2.size(); i++)
  {

    frequencyTable[(int)str2[i]]--;
  }

  for (int i = 0; i < 256; i++)
  {
    if (frequencyTable[i] != 0)
    {
      return false;
    }
  }
  return true;
}

// M-1 sorting and comparing

bool validAnagram(string &str1, string &str2)
{
  sort(str1.begin(), str1.end());

  for (int i = 0; i < str1.length(); i++)
  {
    if (str1[i] != str2[i])
    {
      return false;
    }
  }
  return true;
}

int main()
{

  string str1 = "anagram";
  string str2 = "nagram";

  cout << "Anagram status: " << validAnagram2(str1, str2);

  return 0;
}