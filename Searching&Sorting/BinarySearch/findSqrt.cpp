#include <iostream>
using namespace std;

int findSqrt(int num)
{
  int s = 0;
  int e = num; // range
  long long int mid = s + (e - s) / 2;
  int ans = -1;
  while (s <= e)
  {
    // if mid is my ans
    if (mid * mid == num)
    {
      return mid;
    }
    else if (mid * mid < num)
    {
      // ans store karo
      // right  jao
      ans = mid;
      s = mid + 1;
    }
    else
    {
      e = mid - 1;
    }
    // mid ko update karo
    mid = s + (e - s) / 2;
  }
  return ans;
}

int main()
{
  cout << findSqrt(89);

  return 0;
}