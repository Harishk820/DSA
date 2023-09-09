#include <iostream>
using namespace std;

int main()
{
  int n = 6;
  // cin >> n;
  cout << endl;

  for (int row = 0; row < n; row++)
  {

    for (int col = 0; col < row + 1; col++)
    {
      if (col % 2 == 1)
      {
        cout << " * ";
      }
      else
        cout << row + 1;
    }
    cout << endl;
  }
}