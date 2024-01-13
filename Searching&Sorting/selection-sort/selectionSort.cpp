#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> &arr)
{

  int n = arr.size();
  for (int i = 0; i < n; i++)
  {
    int minIndex = i;               // let ith hi min element  h
    for (int j = i + 1; j < n; j++) // i se aaake sare element tak chalana h loop
    {
      if (arr[j] < arr[minIndex])
      {
        minIndex = j;
      }
    }
    // swap kro ith or minIndex wale element ko
    swap(arr[i], arr[minIndex]);
  }
}

void printArray(vector<int> &arr)
{
  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main()
{
  vector<int> arr = {20, 10, 50, 40, 33, 5, 90, 56, 79, 2};
  selectionSort(arr);
  cout << " sorted array: ";
  printArray(arr);
  return 0;
}