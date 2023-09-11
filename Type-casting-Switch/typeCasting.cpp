
#include <iostream>
using namespace std;

int main()
{

  cout << "output aa gya" << endl;
  int a = 10;
  float b = 5.5;

  //****************** Implicit typecasting ==> Automatically converts to larger data type
  // in order to provide data loss.

  int result = a + b;    // 15
  float result1 = a + b; //  15.5
  cout << result << endl;
  cout << result1 << endl;

  cout << endl;

  char ch = 'A';
  int charResult = ch + 1; // type cast A=65 to integer
  cout << charResult << endl;

  char charResult1 = ch + 1;   // here ch is typecasted into integer and 1 is added to it
  cout << charResult1 << endl; // 66->B

  cout << endl;

  char g = 'B';
  int gg = g; // type casting from char to int B->66
  cout << gg << endl;

  cout << endl
       << endl;

  // EXPILICIT TYPE CONVERSION

  double pi = 3.14635546;
  int intpi = int(pi); // expilicitly converting double to integer
  cout << "interger pi: " << intpi << endl;

  // float to char

  float floatNumber = 65.34;
  char charValue = (char)floatNumber;
  cout << charValue << endl;

  int num1 = 10;
  int num2 = 3;
  float divide = num1 / num2;
  cout << divide << endl;

  float divide1 = (float)num1 / num2;
  cout << divide1 << endl;

  float divide2 = num1 / (float)num2;
  cout << divide2 << endl;

  cout << endl
       << endl;
  return 0;
}
