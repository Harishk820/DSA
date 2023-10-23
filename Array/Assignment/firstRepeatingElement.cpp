#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int firstRepeatingElement(vector<int> arr)
{
  for (int i = 0; i < arr.size(); i++)
  {

    for (int j = i + 1; j < arr.size(); j++)
    {
      if (arr[i] == arr[j])
      {
        return i + 1;
      }
    }
  }
  return -1;
}

int main()
{

  vector<int> arr = {1, 2, 3, 4, 6, 3, 8};
  cout << firstRepeatingElement(arr);
  return 0;
}