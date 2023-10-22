#include <iostream>
using namespace std;

// count variable approach

// --------- Two Pointer Approach-----------
void sort012(int arr[], int size)
{

  int index = 0; // for traversing arrar
  int left = 0;
  int right = size - 1;
  while (index <= right)
  {
    if (arr[index] == 0)
    {
      swap(arr[index], arr[left]);
      index++;
      left++;
    }
    else if (arr[index] == 2)
    {
      swap(arr[index], arr[right]);
      right--;
      // no need of index++ coz fas jayega
    }
    else
    {
      index++;
    }
  }
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
}

int main()
{
  int arr[] = {0, 1, 1, 2, 2, 2, 0, 1, 1, 0};
  int size = 10;

  sort012(arr, size);
  return 0;
}