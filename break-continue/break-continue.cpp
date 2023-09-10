#include <iostream>
using namespace std;

int main()
{
  // ********** Break- Statement
  for (int i = 0; i < 5; i++)
  {

    if (i == 3)
      break; // at this statement loop breaks and comes out of loop
    cout << i << endl;
  }

  // ******** contnue- statement

  cout << endl
       << endl;
  for (int i = 10; i < 15; i++)
  {
    if (i == 13)
      continue; //  at this line flow after continue statement skips(tau-JI) and control goes back to loop again
    cout << i << endl;
  }

  for (int i = 0; i <= 5; i++)
  {
    cout << "harish:" << i << endl;
    continue; // iske baad ki statement execute nhi hogi continue k baad fir loop m chala jayeag
    cout << "kumar";
  }

  return 0;
}
