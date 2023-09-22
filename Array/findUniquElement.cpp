#include <iostream>
using namespace std;

int findUnique(int arr[], int size)
{
  int ans = 0;
  for (int i = 0; i < size; i++)
  {
    ans = ans ^ arr[i]; // XOR returns 0 when elements are same
  }
  return ans;
}

int main()
{
  int arr[] = {2, 4, 5, 7, 2, 4, 5};
  int size = 7;
  int finalAnswer = findUnique(arr, size);
  cout << finalAnswer << endl;
  return 0;
}