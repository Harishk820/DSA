#include <iostream>
#include <vector>
using namespace std;

void printArray(vector<int> &arr)
{
  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void insertionSort(vector<int> &arr)
{
  int n = arr.size();
  // j=0 ko chadna hota h
  for (int i = 1; i < n; i++)
  {
    int j = i - 1; // j i ko ek pehle se chalega
    int key = arr[i];

    while (j >= 0 && arr[j] > key)
    {
      arr[j + 1] = arr[j]; // shifting of elements coz aage key ko dalne ke liye space chaye
      j--;
    }

    arr[j + 1] = key; // this is insertion
  }
}

int main()
{
  vector<int> arr = {20, 10, 50, 40, 33, 5, 90, 56, 79, 2};
  insertionSort(arr);
  cout << " sorted array: ";
  printArray(arr);

  return 0;
}