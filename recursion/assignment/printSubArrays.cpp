#include <iostream>
#include <vector>
using namespace std;

// arr=[1,2,3,4]
// 1
// 1 2
// 1 2 3
// 1 2 3 4

void printSubArrays(vector<int> &arr, int start, int end)
{
  // base case
  if (end >= arr.size())
    return;

  // 1 solution
  for (int i = start; i <= end; i++)
  {
    cout << arr[i];
  }
  cout << endl;

  // RE
  printSubArrays(arr, start, end + 1);
}

int main()
{
  vector<int> arr = {1, 2, 3, 4, 5};

  printSubArrays(arr, 0, 0);

  return 0;
}