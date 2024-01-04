#include <iostream>
using namespace std;

int rec(int n)
{
  if (n == 0 || n == 1)
    return 1;
  return n * rec(n - 1);
}

int sum(int a, int b)
{
  return a + b;
}

int main()
{

  cout << rec(5);

  return 0;
}
