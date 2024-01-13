#include <iostream>
using namespace std;

// print array using recursion

void printArray(int arr[], int size, int index)
{
  if (index >= size)
    return;

  cout << arr[index] << " ";
  printArray(arr, size, index + 1);

  // yha pe cout call karne pe reverse m array print hoga

  // cout << arr[index] << " ";
}

int main()
{

  int arr[7] = {1, 2, 3, 4, 5, 6, 7};

  printArray(arr, 7, 0);
  return 0;
}