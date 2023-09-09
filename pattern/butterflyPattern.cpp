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

    // left pyramid

    for (int col = 0; col < row + 1; col++)
    {
      cout << "*";
    }

    // mid

    for (int col = 0; col < ((2 * n) - (2 * row) - 2); col++)
    {
      cout << " ";
    }

    // right pyramid
    for (int col = 0; col < row + 1; col++)
    {
      cout << "*";
    }

    cout << endl;
  }

  //************************************
}
