#include <iostream>
using namespace std;

//  searching

bool Search(int arr[], int size, int target, int index)
{

  if (index >= size)
    return false;
  if (arr[index] == target)
    return true;

  int agekaAns = Search(arr, size, target, (index + 1));
  return agekaAns;
}

int main()
{

  int arr[7] = {1, 2, 3, 4, 5, 6, 7};

  cout << Search(arr, 7, 5, 0);
  return 0;
}