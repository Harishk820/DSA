#include <iostream>
using namespace std;

int main()
{
  int n = 6;
  // cin >> n;
  cout << endl
       << endl;

  for (int row = 0; row < n; row++)
  {

    // spaces

    for (int col = 0; col < n - row - 1; col++)
    {
      cout << " ";
    }
    // starts
    for (int col = 0; col < row + 1; col++)
    {
      if (col == 0 || col == row + 1 - 1)
      {

        cout << "* ";
      }
      else
      {

        // for eveery col between first and last print space
        cout << "  ";
      }
    }

    cout << endl;
  }

  //**************** inverted diamond

  for (int row = 0; row < n; row++)
  {

    // order of loops shpould remain same

    // spaces
    for (int col = 0; col < row; col++)
    {
      cout << " ";
    }

    // stars

    for (int col = 0; col < n - row; col++)
    {
      if (col == 0 || col == n - row - 1)
      {
        cout << "* ";
      }
      else
      {
        cout << "  ";
      }
    }
    cout << endl;
  }
}