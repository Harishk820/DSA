#include <iostream>
using namespace std;

void updatenum_by_reference(int &num2) // reference(nick name ) of num is recieved
{
  cout << "num from updatenum: " << &num2 << endl;
  num2 += 1; // will update num2 value directly in main
}

int updatenum_by_value(int num) // copy of num is recieved
{                               // here num is different from main num
  cout << "num from updatenum: " << &num << endl;
  num += 1;
  return num;
}

int main()
{
  int num;
  cout << "enter num: ";
  cin >> num;
  updatenum_by_value(num);
  cout << "num from main before update: " << num << endl;
  num = updatenum_by_value(num); // main wala num update ho gaya
  cout << "num from main after update: " << &num << " " << num;

  //  call by reference
  int num2;
  cout << "\nenter num:2 ";
  cin >> num2;
  updatenum_by_reference(num2); // address same h dono ka
  cout << "num from main before update: " << num2 << endl;

  cout << "num from main after update: " << &num2 << " " << num2;

  return 0;
}