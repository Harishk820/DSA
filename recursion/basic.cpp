#include <iostream>
using namespace std;

// fibonacci series

int fibinacci(int n)
{
  if (n == 0)
    return 0;
  if (n == 1)
    return 1;

  int ans = fibinacci(n - 2) + fibinacci(n - 1);
  return ans;
}

// print counting
void printNumber(int n)
{

  if (n == 0)
    return;
  cout << " " << n;
  printNumber(n - 1);
}

int main()
{

  // printNumber(10);

  cout << fibinacci(7);
  return 0;
}