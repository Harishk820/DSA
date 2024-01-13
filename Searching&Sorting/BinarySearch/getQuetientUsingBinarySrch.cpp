#include <iostream>
using namespace std;

int getQuetient(int diviser, int dividend)
{

   int s = 0;
   int e = dividend; //   range-- jo number h
   int mid = s + (e - s) / 2;
   int ans = -1;
   while (s <= e)
   {

      if (mid * diviser == dividend)
      {
         return mid;
      }
      else if (mid * diviser < dividend)
      {
         // ans ko store karo
         ans = mid;
         // right m jao
         s = mid + 1;
      }
      else
      {
         // left m jao
         e = mid - 1;
      }
      // mid ko update karo
      mid = s + (e - s) / 2;
   }
   return ans;
}

int main()
{

   int diviser = 2;                                    // jisse divide karenge
   int dividend = -29;                                 // jo divide hoga
   int ans = getQuetient(abs(diviser), abs(dividend)); // abs positive no bhejne k liye diya h coz negative baad m handle kr lenge

   if (diviser < 0 && dividend > 0 || diviser > 0 && dividend < 0) // nagative case ko handle kra h
   {
      ans = 0 - ans;
   }

   cout << ans;

   return 0;
}