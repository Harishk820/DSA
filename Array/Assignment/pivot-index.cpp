#include <iostream>
#include <vector>

using namespace std;

// Pivot Element(sum right= sum left)

// M-2

int prefixSumApproach(int arr[], int size)
{

  vector<int> lSum(size, 0); // of size and with zero value
  vector<int> rSum(size, 0); // of size and with zero value

  // left sum
  for (int i = 1; i < size; i++)
  {

    lSum[i] = lSum[i - 1] + arr[i - 1];
  }

  // right sum
  for (int i = size - 2; i >= 0; i--)
  {

    rSum[i] = rSum[i + 1] + arr[i + 1];
  }

  for (int i = 0; i < size; i++)
  {
    if (lSum[i] == rSum[i])
      return i;
  }
  return -1;
}

// Brut force
int pivotElement(int arr[], int size)
{

  // for iterating
  for (int i = 0; i < size; i++)
  {
    int leftsum = 0;
    int rightSum = 0;
    // for left sum
    for (int j = 0; j < i; j++)
    {
      leftsum += arr[j];
    }

    // for right sum
    for (int k = i + 1; k < size; k++)
    {
      rightSum += arr[k];
    }
    if (leftsum == rightSum)
    {
      cout << i;
    }
  }
  return -1;
}

int main()
{
  int arr[6] = {1, 6, 3, 4, 2, 1};
  // pivotElement(arr, 6);

  cout << prefixSumApproach(arr, 6);

  return 0;
}