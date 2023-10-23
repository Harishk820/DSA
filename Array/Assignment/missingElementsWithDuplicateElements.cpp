#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// M-2 =>sorting method
int missingElementsWithDuplicateElements2(vector<int> arr)
{

  sort(arr.begin(), arr.end());
  cout << "missing elements: ";
  for (int i = 0; i < arr.size(); i++)
  {

    if (arr[i] == arr[i + 1])
    {
      cout << i + 1 << " ";
    }
  }
}

// **** M-1 visited method  ---constraints arr[i]=[0,N]
int missingElementsWithDuplicateElements(vector<int> arr)
{
  for (int i = 0; i < arr.size(); i++)
  {
    int index = abs(arr[i]);
    if (arr[index - 1] > 0)
    {
      arr[index - 1] *= -1;
    }
  }

  for (int i = 0; i < arr.size(); i++)
  {
    if (arr[i] > 0)
    {
      cout << i + 1 << " ";
    }
  }
}
int main()
{
  vector<int> arr = {1, 3, 4, 5, 3, 7, 7, 8};

  missingElementsWithDuplicateElements2(arr);
  return 0;
}