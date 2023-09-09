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
         cout << "* ";
      }

      cout << endl;
   }
}