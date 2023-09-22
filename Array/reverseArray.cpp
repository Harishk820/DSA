#include <iostream>
using namespace std;

void reverseArray(int arr[], int size)
{
  int left = 0, right = size - 1;
  while (left <= right) // left<right will also work here
  {
    swap(arr[left], arr[right]);
    left++;
    right--;
  }
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
}

void printEndPoint(int arr[], int size)
{
  int left = 0, right = size - 1;
  while (left <= right)
  {
    swap(arr[left], arr[right]);
    cout << arr[left] << " " << arr[right] << " ";
    left++;
    right--;
  }
}

int main()
{
  int arr[] = {2, 56, 67, 44, 32};
  int arr2[] = {22, 50, 45, 78, 33};
  int size = 5;

  cout << "Initail Array: ";

  for (int i = 0; i < size; i++)
  {

    cout << arr[i] << " ";
  }
  cout << endl;

  // reverseArray(arr, 5);

  printEndPoint(arr2, size);

  return 0;
}