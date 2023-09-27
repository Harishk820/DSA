#include <iostream>
using namespace std;

int rowSum(int arr[][4], int row, int col)
{

  for (int i = 0; i < row; i++)
  {
    int sum = 0;
    for (int j = 0; j < col; j++)
    {
      sum += arr[i][j];
    }
    cout << sum << " " << endl;
  }
}

int main()
{

  int row = 3, col = 4;
  int arr[3][4] = {
      {1, 2, 3, 4},
      {5, 6, 7, 8},
      {9, 6, 1, 2}

  };
  rowSum(arr, row, col);
  return 0;
}