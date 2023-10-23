#include <iostream>
#include <vector>
using namespace std;

// M-2 sliding window

int maximumSumSubArray2(vector<int> arr, int k)
{
  int i = 0;
  int j = k - 1; // for pointing element
  int maxSum = INT32_MIN;

  for (int y = i; y <= j; y++)
  {
    int sum = 0;
    sum = sum - arr[i++]; // uses i then increases the position of i
    sum = sum + arr[++j]; // increamenting the value of j before so that it can shift to next block
  }
}

// ********** M-1
int maximumSumSubArray(vector<int> arr, int k)
{
  int i = 0;
  int j = k - 1; // for pointing element
  int maxSum = INT32_MIN;

  while (j < arr.size())
  {
    int subSum = 0;
    for (int y = i; y <= j; y++) // iterating between i and j
    {
      subSum += arr[y];
    }

    if (maxSum < subSum)
    {
      maxSum = subSum;
    }
    i++;
    j++;
  }
  cout << "Maximum sum: " << maxSum;
}

int main()
{
  vector<int> arr = {1, 12, -5, -6, 50, 3};
  int n = 4; // length of sub array
  maximumSumSubArray(arr, n);
  return 0;
}