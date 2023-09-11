#include <iostream>
using namespace std;

int main()
{
  int num1, num2;
  char expression;
  cout << "enter choice:";
  cin >> expression;
  cout << "enter no's: ";
  cin >> num1 >> num2;

  //  expression(type) must be of same type as case for example case-'A','B','C','D'  in this case.

  switch (expression)
  {
  case 'A':
    cout << "addition: " << num1 + num2;
    break;
  case 'B':
    cout << "subtraction: " << num1 + num2;
    break;
  case 'C':
    cout << "multilication: " << num1 + num2;
    break;
  case 'D':
    cout << "division: " << num1 + num2;
    break;

  default:
    cout << "invalid entries!!!" << endl;
    return 0;
  }
  cout << endl
       << "switch completed";
  return 0;
}