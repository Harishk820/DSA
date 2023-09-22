#include <iostream>
#include <limits.h>
using namespace std;

void findMinimumElement(int arr[], int size)
{
  int min = INT_MAX;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] < min)
    {
      min = arr[i];
    }
  }
  cout << "minimum element from1: " << min << endl;
}

void findMinimum(int arr[], int size)
{
  int minElem = INT_MAX;
  for (int i = 0; i < size; i++)
  {
    minElem = min(arr[i], minElem);
  }
  cout << "minimum element from2: " << minElem << endl;
}

int main()
{

  int arr[] = {12, 6, 25, 6, 67};
  int arr2[] = {66, 43, 76, 56, 45};

  findMinimumElement(arr, 5);
  findMinimum(arr2, 5);

  return 0;
}