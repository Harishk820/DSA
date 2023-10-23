#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// M-2 => count no of 0,1,2 by traversing

int sortCountMethod(vector<int> sortingArray)
{

  int zero = 0, one = 0, two = 0;
  vector<int> resultVector;

  for (int i = 0; i < sortingArray.size(); i++)
  {
    if (sortingArray[i] == 0)
      zero++;
    else if (sortingArray[i] == 1)
      one++;
    else
      two++;
  }

  for (int i = 0; i < zero; i++)
  {
    resultVector.push_back(0);
  }
  for (int i = 0; i < one; i++)
  {
    resultVector.push_back(1);
  }
  for (int i = 0; i < two; i++)
  {
    resultVector.push_back(2);
  }

  for (int i = 0; i < resultVector.size(); i++)
  {
    cout << resultVector[i] << " ";
  }
}

int sort012(vector<int> sortingArray)
{
  sort(sortingArray.begin(), sortingArray.end()); // sorts array
  for (int i = 0; i < sortingArray.size(); i++)
  {
    cout << sortingArray[i] << " ";
  }
}

int main()
{

  vector<int> sortingArray = {0, 2, 2, 2, 1, 0, 0, 1, 1};
  // sort012(sortingArray);
  sortCountMethod(sortingArray);

  return 0;
}