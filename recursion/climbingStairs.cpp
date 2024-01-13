#include <iostream>
using namespace std;

// climbing stairs
// input output
// 3-->3
// 5==>8

int climbingStarirs(int n)
{
  if (n == 1)
    return 1;
  if (n == 2)
    return 2;

  int ans = climbingStarirs(n - 1) + climbingStarirs(n - 2);

  return ans;
}

int main()
{

  cout << climbingStarirs(5);
  return 0;
}