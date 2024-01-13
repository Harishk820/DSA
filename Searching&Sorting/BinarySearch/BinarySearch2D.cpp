#include <iostream>
#include <vector>
using namespace std;

// formula for 2D -> 1D ==> { c*i+j }
// formula for 1D -> 2D ==> { i=mid/c , j=mid%c }

bool BinarySEarch2D(vector<vector<int>> matrix, int target)
{
  // startting element of each row should be greater than last index of previous row
  int row = matrix.size();
  int col = matrix[0].size();
  int n = row * col;

  int s = 0;
  int e = n - 1;
  int mid = s + (e - s) / 2;

  while (s <= e)
  {
    int rowIndex = mid / col;
    int colIndex = mid % col;
    int currentElement = matrix[rowIndex][colIndex];

    if (currentElement == target)
    {
      return true;
    }
    else if (target > currentElement)
    {
      // right
      s = mid + 1;
    }
    else
    {
      e = mid - 1;
    }

    // update mid
    mid = s + (e - s) / 2;
  }
  return false;
}

int main()
{
  vector<vector<int>> matrix = {{1, 2, 3},
                                {4, 5, 6},
                                {7, 8, 9}};
  int target = 0;
  bool result = BinarySEarch2D(matrix, target);
  cout << result;

  return 0;
}