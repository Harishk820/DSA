#include <iostream>
using namespace std;

// using modulas approach
void shitByK(int arr[], int size, int k)
{
  int ansArr[size];
  for (int i = 0; i < size; i++)
  {
    int newindex = (i + k) % size; // finding shifts
    ansArr[newindex] = arr[i];
  }
  for (int i = 0; i < size; i++)
  {
    cout << ansArr[i] << " ";
  }
}

int main()
{
  int arr[] = {2, 4, 5, 7, 8, 9, 6, 3, 1};
  int size = 9;
  int k = 3;
  shitByK(arr, size, k);
  return 0;
}