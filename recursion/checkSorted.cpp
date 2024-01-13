#include <iostream>
using namespace std;

// check if array is sorted

bool checkSorted(int arr[], int size, int index)
{
  // base case
  if (index >= size)
    return true;
  // processing

  if (arr[index] > arr[index - 1])
  {
    // array m aage check karna padega

    bool aageKaAns = checkSorted(arr, size, index + 1);
    return aageKaAns;
  }
  else
  { // sorted nahi h
    return false;
  }
}

int main()
{
  int arr[] = {10, 20, 30, 40, 50, 60, 70};
  bool ans = checkSorted(arr, 7, 1); // index 1 bheja h coz 1 ek element aage h tabi to vo 0th wale se compare karega

  if (ans)
  {
    cout << "Array is sorted ";
  }
  else
  {
    cout << "Array is not sorted";
  }
  return 0;
}