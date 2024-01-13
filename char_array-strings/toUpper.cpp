#include <iostream>
using namespace std;

void toUpperCase(char ch[], int size)
{
  int index = 0;
  while (ch[index] != '\0')
  {
    char currCharacter = ch[index];
    // check if lowercase h ya nahi
    if (currCharacter >= 'a' && currCharacter <= 'z')
    {

      ch[index] = currCharacter - 'a' + 'A';
    }
    index++;
  }
}

int main()
{

  char ch[50];
  cin >> ch;
  cout << "before " << ch << endl;
  toUpperCase(ch, 50);
  cout << "after: " << ch;
  return 0;
}