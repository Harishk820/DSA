#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int target)
{
  int start = 0;
  int end = arr.size() - 1;
  int mid = (start + end) / 2;

  while (start <= end)
  {
    if (arr[mid] == target)
    {
      return mid;
    }
    else if (target > arr[mid])
    {
      start = mid + 1;
    }
    else if (target < arr[mid])
    {
      end = mid - 1;
    }

    // yha galti hoti h avoid this mid wali mistake
    mid = (start + end) / 2; // agar is condition ko while k ander declare kare to global mid ko hata skte h
  }

  // out of loop matlab element nhi mila
  cout << "Element not found!!";
}

int main()
{
  int target = 80;
  vector<int> arr = {10, 20, 30, 40, 50, 60, 70, 80, 90};
  cout << "Enter elemet to be searched: ";
  cin >> target;

  cout << binarySearch(arr, target);
  return 0;
}