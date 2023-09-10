#include <iostream>
using namespace std;

int main()
{

  int num = 7;

  // ****in left shift num gets  (*) multiplied in the power of 2^n in each shift

  cout << (num << 1) << endl;
  cout << (num << 2) << endl;
  cout << (num << 3) << endl;

  //**********  Right shift

  // num gets (/) divided by 2^n in most of the case(fat sakti h compiler dependent h)

  cout << (num >> 1) << endl;
  cout << (100 >> 2) << endl;
  cout << (100 >> 3) << endl;
  cout << (-100 >> 1) << endl;           // compiler handled it in case of signed int
  cout << (unsigned(-100) >> 1) << endl; // gives same large no compiler dosent handle

  cout << (10 << -1) << endl; // gives warning and garbage value
  cout << (10 >> -1) << endl; // gives warning here as well

  int a = 10;
  cout << ((++a) * (a++));

  return 0;
}