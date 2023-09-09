#include <iostream>
using namespace std;

int main()
{

  int num = 8;

  int n = num / 2;

  cout << endl;

  // order of loops shpould remain same

  //*********** pyramid number 1

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
      cout << "* ";
    }

    cout << endl;
  }

  //*********** inverted pyramid

  for (int row = 0; row < n; row++)
  {

    // spaces
    for (int col = 0; col < row; col++)
    {
      cout << " ";
    }

    // stars
    for (int col = 0; col < n - row; col++)
    {

      cout << "* ";
    }
    cout << endl;
  }
}
