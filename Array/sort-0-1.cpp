#include <iostream>
using namespace std;

int sortZeroOne(int arr[], int size)
{
  int zero = 0, one = 0;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == 0)
    {
      zero++;
    }
    else if (arr[i] == 1)
    {
      one++;
    }
  }
  for (int i = 0; i < zero; i++)
  {
    cout << "0 ";
  }
  for (int j = 0; j < one; j++)
  {
    cout << "1 ";
  }
}

// int sortZeroOneTwoPointer(int arr[], int size)
// {
//   int left = 0, right = size - 1;
//   while (left < right)
//   {
//     if (arr[left] < arr[right])
//     {

//       left++;
//       right--;
//     }
//   }

// for (int i = 0; i < size; i++)
// {
//   cout << arr[i] << " ";
// }
// }

int main()
{

  int arr[] = {1, 0, 1, 1, 1, 0, 0, 0, 1, 1, 0};
  int size = 11;

  sortZeroOne(arr, size);

  // sortZeroOneTwoPointer(arr, size);

  return 0;
}