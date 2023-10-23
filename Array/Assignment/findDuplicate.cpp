#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//********* M-3 ----------> By positioning
int findDuplicate3(vector<int> arr)
{
  while (arr[0] != arr[arr[0]])
  {
    swap(arr[0], arr[arr[0]]);
  }
  cout << arr[0];
}

//-*********** M-2  -----> BY marking visited
int findDuplicate2(vector<int> arr)
{

  for (int i = 0; i < arr.size(); i++)
  {
    int index = abs(arr[i]);
    // already visited
    if (arr[index] < 0)
    {
      cout << index;
    }
    // mark index
    arr[index] *= -1;
  }
}

// ************  M-1 --->By sorting array
int findDuplicate(vector<int> arr)
{
  sort(arr.begin(), arr.end());
  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i] << " ";
  }

  for (int i = 0; i < arr.size(); i++)
  {
    if (arr[i] == arr[i + 1])
      cout << "Duplicate:" << arr[i];
  }
}

int main()
{
  vector<int> arr = {1, 2, 2, 3, 4, 5};
  findDuplicate3(arr);

  return 0;
}