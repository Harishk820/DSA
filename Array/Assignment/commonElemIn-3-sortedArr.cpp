#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int commonElementIn3SortedArray(vector<int> arr1, vector<int> arr2, vector<int> arr3)
{
  int i, j, k;
  i = j = k = 0;
  vector<int> ansArray;
  set<int> ans; // set isliye le rahe h qki similar element wale array m fat jayega
  while (i < arr1.size() && j < arr2.size() && k < arr3.size())
  {
    if (arr1[i] == arr2[j] && arr2[j] == arr3[k])
    {
      ans.insert(arr1[i]);
      i++;
      j++;
      k++;
    }
    else if (arr1[i] < arr2[j])
    {
      i++;
    }
    else if (arr2[j] < arr3[k])
    {
      j++;
    }
    else
      k++;
  }

  // inserting set elements into aray
  for (auto i : ans)
  {
    ansArray.push_back(i);
  }
  // printing array
  for (int i = 0; i < ansArray.size(); i++)
  {
    cout << ansArray[i] << " ";
  }
}

int main()
{
  vector<int> arr1 = {10, 20, 30, 44, 50};
  vector<int> arr2 = {20, 44, 55, 40};
  vector<int> arr3 = {5, 20, 44, 89, 90, 80};

  commonElementIn3SortedArray(arr1, arr2, arr3);
  return 0;
}