#include <iostream>
using namespace std;

void shiftByOne(int arr[], int size)
{
  int temp = arr[size - 1];
  for (int i = size - 1; i >= 1; i--)
  {

    arr[i] = arr[i - 1];
  }

  arr[0] = temp;
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
}

int main()
{

  int arr[] = {22, 49, 45, 80, 90};
  int size = 5;

  cout << "Initial array: ";
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  shiftByOne(arr, size);
  return 0;
}