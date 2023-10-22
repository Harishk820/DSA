#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// concept ==> transpose then reverse every row

int rotateMatrix90(vector<vector<int>> arr)
{
  // tranpose
  for (int i = 0; i < arr.size(); i++)
  {
    for (int j = i; j < arr[i].size(); j++)
    {
      swap(arr[i][j], arr[j][i]);
    }
  }

  // reVerse-> 2D matrix ki sari rows ko

  for (int i = 0; i < arr.size(); i++)
  {
    // har row ko reverse karna h

    // array ko reverse karna hota to---> revere(arr,arr+n)-arr base address h and n-size h
    reverse(arr[i].begin(), arr[i].end());
  }

  cout << "Afer rotating 90 Matrix" << endl;
  for (int i = 0; i < arr.size(); i++)
  {
    for (int j = 0; j < arr[i].size(); j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}

int main()
{

  vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  // int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  cout << "Initial Matrix" << endl;
  for (int i = 0; i < arr.size(); i++)
  {
    for (int j = 0; j < arr[i].size(); j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  rotateMatrix90(arr);

  return 0;
}