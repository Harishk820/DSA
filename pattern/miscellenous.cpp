#include <iostream>
using namespace std;

int main()
{
  int n = 6;
  // cin >> n;
  cout << endl
       << endl;

  for (int i = 0; i < n; i++)
  {

    for (int j = 0; j < n - i - 1; j++)
    {
      cout << " ";
    }

    for (int j = 0; j < i + 1; j++)
    {
      cout << "* ";
    }

    cout << endl;
  }

  // for (int row = 0; row < n; row++)
  // {

  //   for (int col = 0; col < row + 1; col++)
  //   {

  //     char ch = col + 'A';
  //     cout << ch << " ";
  //   }

  //   cout << endl;
  // }

  //   *********************************************

  /*

  ******
  *   *
  *  *
  * *
  **
  *


  */

  // for (int row = 0; row < n; row++)
  // {

  //   for (int col = 0; col < n - row; col++)

  //     if (row == 0 || row == n - 1)
  //     {
  //       cout << "*";
  //     }
  //     else if (col == 0 || col == (n - row) - 1)
  //     {
  //       cout << "*";
  //     }
  //     else
  //     {
  //       cout << " ";
  //     }

  //   cout << endl;
  // }
}