#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int printMatrixInWave(vector<vector<int>> matrix)
{
  int n = matrix[0].size();
  int m = matrix.size();
  for (int startCol = 0; startCol < n; startCol++)
  {
    // even no of col-> top to bottom
    if ((startCol & 1) == 0) // checks if even
    {
      for (int i = 0; i < m; i++)
      {
        cout << matrix[i][startCol] << " ";
      }
    }
    else
    {
      // printing odd no
      for (int i = m - 1; i >= 0; i--)
      {
        cout << matrix[i][startCol] << " ";
      }
    }
  }
}

int main()
{
  vector<vector<int>> matrix = {{1, 2, 3, 4},
                                {5, 6, 7, 8},
                                {9, 10, 11, 12}};

  printMatrixInWave(matrix);
  return 0;
}