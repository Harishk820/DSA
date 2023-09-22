#include <iostream>
using namespace std;

int main()
{

  int num = 5;
  int &k = num;                   //(nick name/reference to variable num)- here &k is alternate name of variable num
  int &c = num;                   // similarly &c is also altenate name of variable num
  cout << "num: " << num << endl; //-- 5
  cout << "k: " << k << endl;     //--5
  cout << "c: " << c << endl;     //--5

  k++;

  cout << "num: " << num << endl; //-- 6
  cout << "k: " << k << endl;     //--6
  cout << "c: " << c << endl;     //--6
  return 0;
}