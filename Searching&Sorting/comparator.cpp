#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Comparator se ham sorting apne hisab se kr skte h(inc/dec)

void printArray(vector<int> &arr)
{
  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

bool myComparator(int &a, int &b)
{
  return a > b; // this allows us to sort in dec order
  //  return a < b; // sorts in inc order
}

int main()
{
  vector<int> arr = {20, 10, 50, 40, 33, 5, 90, 56, 79, 2};

  // sort(arr.begin(), arr.end()); // this will sort in inc order
  sort(arr.begin(), arr.end(), myComparator);

  printArray(arr);
  return 0;
}