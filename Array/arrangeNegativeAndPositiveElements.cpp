#include <iostream>
using namespace std;

int shiftNegativesOneSide(int arr[], int size)
{
  int j = 0;                     // memory block jaha m negatives store karunga
  for (int i = 0; i < size; i++) // i is for traversing the array
  {
    if (arr[i] < 0)
    {
      swap(arr[i], arr[j]);
      j++;
    }
  }
  cout << endl
       << "Final Array: ";
  for (int i = 0; i < size; i++)
  {
    cout << " " << arr[i];
  }
}

int main()
{
  int arr[] = {2, 33, -5, -56, 8, 1};
  cout << "Initial Array: ";
  for (int i = 0; i < 6; i++)
  {
    cout << arr[i] << " ";
  }
  shiftNegativesOneSide(arr, 6);
  return 0;
}