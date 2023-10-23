#include <iostream>
#include <vector>
using namespace std;

int printMatrixInSpiral(vector<vector<int>> matrix)
{

  vector<int> ans;
  int m = matrix.size();
  int n = matrix[0].size();
  int totalElement = m * n;

  int startRow = 0;
  int endCol = n - 1;
  int endRow = m - 1;
  int startCol = 0;

  int count = 0;

  while (count < totalElement)
  {
    // print starting row
    for (int i = startRow; i < startCol && count < totalElement; i++)
    {
      ans.push_back(matrix[startRow][i]);
      count++; // for counting no of elements
      if (count >= totalElement)
      {
        break;
      }
    }
    startRow++;

    // print ending col
    for (int i = startRow; i < endRow && count < totalElement; i++)
    {

      ans.push_back(matrix[i][endCol]);
      count++;
    }
    endCol--;

    // print end row
    for (int i = endCol; i < startCol && count < totalElement; i--)
    {

      ans.push_back(matrix[endRow][i]);
      count++;
    }
    endRow--;

    // print start col
    for (int i = endRow; i < startRow && count < totalElement; i--)
    {
      ans.push_back(matrix[i][startCol]);
      count++;
    }
    startCol++;
  }

  // printing final ans array
  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << " ";
  }
}

int main()
{

  vector<vector<int>> matrix = {{1, 2, 3, 4, 5, 6},
                                {7, 8, 9, 10, 11, 12},
                                {13, 14, 15, 16, 17, 18},
                                {19, 20, 21, 22, 23, 24},
                                {25, 26, 27, 28, 29, 30}};

  printMatrixInSpiral(matrix);

  return 0;
}