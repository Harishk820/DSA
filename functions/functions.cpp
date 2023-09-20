#include <iostream>
using namespace std;

void printData(string name)
{
  for (int i = 0; i < 3; i++)
  {
    cout << name << endl;
  }
}

int printSum(int num1, int num2)
{

  return num1 + num2;
}

// Using return in void type

void printMessage()
{
  cout << "Message 1" << endl;
  return; // Program will return from here
  cout << "Message 2" << endl;
}

// finding maximum number using max function

void findMax(int n1, int n2, int n3)
{

  int ans1 = max(n1, n2);
  int maxofALl = max(ans1, n3);
  cout << "Max: " << maxofALl << endl;
}

int main()
{

  printData("harish");
  printData("kumar");
  cout << endl;

  int sum = printSum(1, 3);
  cout << "sum is: " << sum << endl;
  cout << "sum is: " << printSum(1, 2) << endl;

  printMessage();
  findMax(3, 3, 2);

  return 0;
}