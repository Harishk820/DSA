#include <iostream>
#include <vector>
using namespace std;

int findPivotElement(vector<int> arr)
{
  int s = 0;
  int e = arr.size() - 1;
  int mid = s + (e - s) / 2;

  while (s <= e)
  {
    if (s == e)
    {           // isse single case bhi handle ho jayega
      return s; // or retturn e or mid san ek hi h
    }
    else if (arr[mid] < arr[mid - 1])
    {
      return mid - 1;
    }
    else if (arr[mid] > mid + 1)
    {
      return mid;
    }
    else if (arr[s] > arr[mid])
    {
      e = mid - 1;
    }
    else
    {
      s = mid + 1;
    }
    mid = s + (e - s) / 2;
  }
  return -1;
}

int main()
{

  vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
  //
  int result = findPivotElement(arr);
  cout << "pivot element found at index: " << result;

  return 0;
}