#include <iostream>
using namespace std;

bool linearSerach(int arr[], int size, int target)
{
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == target)
    {
      return true;
    }
  }
  return false;
}

int main()
{
  int arr[5] = {2, 13, 4, 56, 36}, target;
  bool flag = linearSerach(arr, 5, 44);
  if (flag == 1)
  {
    cout << "Target found!!";
  }
  else
  {
    cout << "Target not found!!";
  }

  return 0;
}