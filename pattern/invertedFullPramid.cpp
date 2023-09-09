#include <iostream>
using namespace std;

int main()
{

  int n = 4;
  cout << endl;
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

      cout << "* ";
    }
    cout << endl;
  }
}
