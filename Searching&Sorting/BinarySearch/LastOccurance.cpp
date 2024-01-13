#include <iostream>
#include <vector>
using namespace std;

int lastOccurance(vector<int> arr, int target)
{

  int start = 0;
  int end = arr.size() - 1;

  int mid = start / 2 + end / 2;

  int ans = -1;

  while (start <= end)
  {

    if (arr[mid] == target)
    {
      // ans ko store kro
      ans = mid;
      // right m jao
      start = mid + 1;
    }
    else if (target > arr[mid])
    { // right me jao
      start = mid + 1;
    }
    else if (target < arr[mid])
    { // left m jao
      end = mid - 1;
    }

    // yha galti karte h
    mid = (start + end) / 2;
  }
  return ans;
}

int main()
{
  vector<int> arr = {1, 2, 3, 4, 5, 8, 8, 9};
  int target = 8;
  int answer = lastOccurance(arr, target);
  cout << "Element foud at index: " << answer;
  return 0;
}