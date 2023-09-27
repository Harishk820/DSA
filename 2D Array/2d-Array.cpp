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

void colWisePrint(int arr[][4], int row, int col)
{
  for (int i = 0; i < col; i++)
  {
    for (int j = 0; j < row; j++)
    {
      cout << arr[j][i] << " ";
    }
    cout << endl;
  }
}

int main()
{
  int arr[3][4] = {
      {1, 2, 3, 4},
      {5, 6, 7, 8},
      {9, 6, 1, 2}

  };

  //********** formula { C*i+j }   memory is allocated linearly

  // int arr1[][] = {      ---------->>wrong declaraion
  //     {1, 2, 3, 4},
  //     {11, 22, 33, 44},
  //     {111, 222, 333, 444}
  // };

  // int arr[3][] = {  ------------> wrong
  //     {1, 2, 3, 4},
  //     {11, 22, 33, 44},
  //     {111, 222, 333, 444}
  // };

  int arr3[][4] = {// atleast col should be defined as per formula
                   {1, 2, 3, 4},
                   {11, 22, 33, 44},
                   {111, 222, 333, 444}};

  int row = 3, col = 4;
  printArray(arr, row, col);
  colWisePrint(arr, row, col);
  return 0;
}