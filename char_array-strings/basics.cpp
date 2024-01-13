#include <iostream>
#include <string.h>
using namespace std;

void reverseSrting(char str[], int size)
{
  int i = 0;
  int j = size - 1;

  while (i <= j)
  {
    swap(str[i], str[j]);
    i++;
    j--;
  }
}

int main()
{

  // char delimiter

  /*

  '_'  --> space
  '\t' --> tab
  '\n' --> enter

 ----> To overcome this we have to use cin.getline(string,maxSize) <-----

  */

  char sentence[50];
  cin >> sentence; // here if I enter 'my name is'
  cin.getline(sentence, 50);
  cout << sentence; // it produces only "my" -->hence use cin.getline
  cout << "\nPrinting Length: " << strlen(sentence);
  char str[50];
  cin.getline(str, 50);
  cout << "\ninitail string: " << str;
  reverseSrting(str, strlen(str)); // yha galti h string ka size send karna padega
  cout << "\n Reversed String is: " << str;

  return 0;
}