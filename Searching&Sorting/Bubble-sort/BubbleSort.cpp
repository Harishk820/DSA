#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &arr)
{

  int n = arr.size();
  for (int i = 0; i < n - 1; i++) // size se ek kam tak chalana h loop
  {
    for (int j = 1; j = n - i - 1; j++) // har baar iteratiion kam hote h (j=n-i-1)
    {

      if (arr[j] > arr[j + 1]) // for decreasing order ( > ko < ) kr do
      {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
}

void printArray(vector<int> &arr)
{
  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i] << " ";
  }
}

int main()
{
  vector<int> arr = {20, 10, 30, 40, 70, 50};
  bubbleSort(arr);
  printArray(arr);
  return 0;
}