#include <iostream>
#include <vector>
using namespace std;

// finding missing element using Binary search
int findMissingElement(vector<int> arr)
{
  int start = 0;
  int end = arr.size() - 1;
  int mid = (start + end) / 2;
  int ans = -1;

  while (start <= end)
  {
    int diff = arr[mid] - mid;
    if (diff == 1)
    {
      // right m jao
      start = mid + 1;
    }

    else
    { // ans store kro
      ans = mid;
      // left m jao
      end = mid - 1;
    }
    // mid ko update karte h yha mistake hoti h
    mid = (start + end) / 2;
  }

  // last wale case m fatega
  if (ans + 1 == 0)
  {
    return arr.size() + 1;
  }
  return ans + 1;
}

int main()
{
  vector<int> arr = {1, 2, 3, 4, 5, 6, 8, 9};
  int result = findMissingElement(arr);
  cout << "Missing no: " << result;
  return 0;
}