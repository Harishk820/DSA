#include <iostream>
#include <vector>
using namespace std;

// work on this

void merge(vector<int> arr, int s, int e)
{
  // find mid
  int mid = (s + e) / 2;
  int lenLeft = mid - s + 1;
  int lenRight = e - mid;

  // create left and right array
  vector<int> left;
  vector<int> right;

  // copy the left values to left array
  int k = s;
  for (int i = 0; i < lenLeft; i++)
  {
    left.push_back(arr[k]);
    // left[i] = arr[k];
    k++;
  }

  // copy the right values to left array
  k = mid + 1;
  for (int i = 0; i < lenRight; i++)
  {
    right.push_back(arr[k]);
    // right[i] = arr[k];
    k++;
  }

  int leftIndex = 0;
  int rightIndex = 0;
  // yha galti hoti h

  int mainArrayIndex = s;

  while (leftIndex < lenLeft && rightIndex < lenRight)
  {

    if (left[leftIndex] < right[rightIndex])
    {
      arr[mainArrayIndex] = left[leftIndex];
      mainArrayIndex++;
      leftIndex++;
    }
    else
    {
      arr[mainArrayIndex] = right[rightIndex];
      mainArrayIndex++;
      rightIndex++;
    }
  }

  // two more cases

  // 1 if left array is exuasted but right array has elements

  while (rightIndex < lenRight)
  {
    arr[mainArrayIndex] = right[rightIndex];
    rightIndex++;
    mainArrayIndex++;
  }
  // 2. when right array is exausted and left array has elements
  while (leftIndex < lenLeft)
  {
    arr[mainArrayIndex] = left[leftIndex];
    leftIndex++;
    mainArrayIndex++;
  }
}

void mergeSort(vector<int> arr, int s, int e)
{

  // base case
  if (s >= e)
  {
    return;
  }

  int mid = (s + e) / 2;
  // recursive call for left array
  mergeSort(arr, s, mid);
  // recursive call for right array
  mergeSort(arr, mid + 1, e);

  // merge two sorted array
  merge(arr, s, e);
}

int main()
{

  vector<int> arr = {20, 33, 11, 67, 34, 20};
  int s = 0;
  int e = arr.size() - 1;

  mergeSort(arr, s, e);
  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}