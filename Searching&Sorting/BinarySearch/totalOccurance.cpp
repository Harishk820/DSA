#include <iostream>
#include <vector>
using namespace std;

// ---------------- last occurance
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

//  ----first Occurance
int firstOccurance(vector<int> arr, int target)
{

  int start = 0;
  int end = arr.size() - 1;
  // int mid = (start + end); //-----> chance of intiger overflow

  int mid = start + (start - end) / 2; //--> ye sahi h
  // Or
  // int mid = start/2+ end/2;

  int ans = -1;

  while (start <= end)
  {

    if (arr[mid] == target)
    {
      // ans ko store kro
      ans = mid;
      // left m jao
      end = mid - 1;
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
    mid = start + (start - end) / 2;
  }
  return ans;
}

int totalOccurance(vector<int> arr, int target)
{
  int first = firstOccurance(arr, target);
  cout << "first: " << first;
  int last = lastOccurance(arr, target);
  cout << "last: " << last;
  // return last - first + 1;
}

int main()
{
  vector<int> arr = {3, 3, 3, 3, 6, 7, 8, 9};
  int target = 3;
  totalOccurance(arr, target);
  // cout << "Total Occurance: " << result;
  return 0;
}