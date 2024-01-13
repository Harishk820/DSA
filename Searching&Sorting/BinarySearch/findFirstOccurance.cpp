#include <iostream>
#include <vector>
using namespace std;

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

    if (target == arr[mid])
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

int main()
{
  vector<int> arr = {1, 2, 3, 4, 8, 8, 8, 9};
  int target = 8;
  int answer = firstOccurance(arr, target);
  cout << "Element foud at index: " << answer;
  return 0;
}