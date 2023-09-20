#include <iostream>
using namespace std;

float areaOfCirecle(float rad)
{
  float area = 3.14 * rad * rad;
  cout << area << endl;
}

int factorial(int num)
{
  if (num == 0 || num == 1)
  {
    return 1;
  }
  return num * factorial(num - 1);
}

bool checkPrime(int num)
{

  for (int i = 2; i < num; i++)
  {
    if (num % i == 0)
    {
      return false;
    }
    else
    {
      return true;
    }
  }
}

bool isEven(int num)
{
  if ((num ^ 1) == (num + 1))
  {
    return true;
  }
  else
    return false;
}

int reverseNum(int num)
{
  int ans = 0;
  bool isNegative = false;

  if (num < 0)
  { // handling negtive number case
    isNegative = true;
    num = -num;
  }

  while (num > 0)
  {
    int digit = num % 10;
    ans = ans * 10 + digit;
    num = num / 10;
  }
  return isNegative ? -ans : ans;
}

int binaryToDeci(int num)
{
  if (num > 1)
  {
    binaryToDeci(num / 2);
  }
  cout << num % 2;
}

// **************************seting kth bit

int setKthBit(int num, int k) // seting kth bit
{
  int mask = 1 << k;
  return mask | num;
}

/*  finding set bits    */

int setBitcount(int num)
{
  int count = 0;
  // while (num > 0)
  // {

  //   int bit = num % 2;
  //   if (bit == 1)
  //   {
  //     count++;
  //   }
  //   num = num / 2;
  // }

  while (num > 0)
  {
    int bit = (num & 1); // this will give us most significant bits
    if (bit == 1)
    {
      count++;
    }
    num = num >> 1;
  }

  return count;
}

// creating number using digits

int createNoUsingDigit(int numberOfDigits)
{

  int num = 0;
  for (int i = 0; i < numberOfDigits; i++)
  {
    cout << "Enter Digit " << i + 1 << endl;
    int digit;
    cin >> digit;
    num = num * 10 + digit;
  }
  return num;
}

// program to find digits form a number

int digitOfNumber(int num)
{
  int digit;
  while (num > 0)
  {
    digit = num % 10;
    cout << digit << " ";
    num = num / 10;
  }
}

int main()
{

  // areaOfCirecle(2);
  // cout << factorial(3) << endl;
  // isEven(5) ? cout << "true " : cout << "false";
  // cout << reverseNum(3454) << endl;
  // cout << reverseNum(-61678) << endl;
  // binaryToDeci(42);

  // cout << setKthBit(15, 3);

  // cout << setBitcount(7) << endl
  //      << endl;

  // cout << createNoUsingDigit(5);
  digitOfNumber(4579753);
  return 0;
}