#include <iostream>
#include <vector>
using namespace std;

int peakElementInMountainArray(vector<int> arr)
{
  int n = arr.size();
  int s = 0;
  int e = n - 1;

  while (s < e)
  {

    int mid = s + (e - s) / 2;
    if (arr[mid] < arr[mid + 1])
    {
      // A wali line pe hu
      //  peak right me exits karega
      s = mid + 1;
    }

    else
    {
      // B line pe hu
      // ya peak element pe hi hu
      e = mid; // isse mid miss nhi hua
    }
  }

  return s; // peak element ye hi h - return e bhi kar skte h
}

int main()
{
  vector<int> arr = {0, 2, 4, 5, 3, 1};
  int result = peakElementInMountainArray(arr);
  cout << "Peak element at index: " << result;
  return 0;
}