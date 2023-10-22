#include <iostream>
#include <algorithm>
using namespace std;

// key pair/two sum
// M-1

bool keyPair(int arr[], int size, int pairSum)
{

  for (int i = 0; i < size; i++)
  {
    for (int j = i + 1; j < size; j++)
    {
      if (arr[i] + arr[j] == pairSum)
      {
        return true;
      }
    }
  }
  return false;
}

//  M-2
bool pairSum(int arr[], int size, int pairsum)
{
  int start = 0;
  int end = size - 1;
  sort(arr, arr + size);

  while (start < end)
  {
    int currentSum = arr[start] + arr[end];
    if (currentSum == pairsum)
    {
      return true;
    }
    else if (currentSum > pairsum)
    {
      end--;
    }
    else
    {
      start++;
    }
  }
  return false;
}

int main()
{

  int arr[6] = {1, 4, 55, 6, 8, 3};
  // cout << keyPair(arr, 6, 3);
  cout << pairSum(arr, 6, 11);
  return 0;
}