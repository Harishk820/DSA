#include <iostream>
#include <string.h>
using namespace std;

int main()
{
  // creation
  string name;

  // input
  // cin >> name;
  //---- spaces handle karne k liye
  getline(cin, name);

  // print
  cout << "Printing string: " << name << endl;
  cout << "Printing char a 0th index: " << name[0] << endl;
  cout << "Length of string: " << name.length();
  // loop se bhi print kr skte h
  int index = 0;
  // while (name[index] != '\0')
  // {
  //   cout << "index: " << index << " character: " << name[index] << endl;
  //   index++;
  // }

  return 0;
}