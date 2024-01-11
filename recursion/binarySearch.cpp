#include <iostream>
using namespace std;

// Binary Search using Recursion

int binarySearch(int arr[], int s, int e, int target)
{
  // base case
  if (s > e)
    // element not found
    return -1;

  // processing --> ek case solve kro bas
  int mid = s + (e - s) / 2;
  if (arr[mid] == target)
  {
    return mid;
  }

  if (arr[mid] < target)
  {
    return binarySearch(arr, mid + 1, e, target);
  }
  else
  {

    return (arr, s, mid - 1, target);
  }
}

int main()
{

  int arr[] = {10, 20, 30, 40, 50, 60, 70};

  int size = 7;
  int s = 0;
  int e = size - 1;
  int target = 60;

  cout << binarySearch(arr, s, e, target);

  return 0;
}