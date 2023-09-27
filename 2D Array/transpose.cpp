#include <iostream>
using namespace std;

void printArray(int arr[][4], int row, int col)
{

  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}

void transpose(int arr[][4], int row, int col)
{
  for (int i = 0; i < row; i++)
  {
    for (int j = i; j < col; j++)
    { // traversing only top right triangle
      swap(arr[i][j], arr[j][i]);
    }
  }
}

int main()
{
  int row = 4, col = 4;
  int arr[4][4] = {
      {1, 2, 3, 4},
      {5, 6, 7, 8},
      {9, 6, 1, 2},
      {5, 6, 7, 6}

  };
  printArray(arr, row, col);
  cout << endl;
  transpose(arr, row, col);
  printArray(arr, row, col);

  return 0;
}