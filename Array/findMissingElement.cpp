#include <iostream>
using namespace std;

// sum approach

void findMissingElement(int arr[], int size)
{

  int sum = 0;
  for (int i = 0; i < size; i++)
  {
    sum = sum + arr[i];
  }
  int totalSum = ((size) * (size + 1)) / 2;
  int missingElement = totalSum - sum;
  cout << missingElement;
}

int main()
{

  int arr[] = {1, 2, 3, 5, 6, 7, 8};
  int n = 7;
  findMissingElement(arr, n);

  return 0;
}