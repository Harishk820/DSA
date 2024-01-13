#include <iostream>
#include <vector>
using namespace std;

// max profit find karna h

void maxProfitFinder(vector<int> &prices, int index)
{

  int minPrice = __INT_MAX__;
  int maxProfit = __WINT_MIN__;

  // base case
  if (index >= prices.size())
    return;

  // one case
  if (prices[index] < minPrice)
  {
    minPrice = prices[index];
    int todaysProfit = prices[index] - minPrice;
    if (todaysProfit > maxProfit)
    {
      maxProfit = todaysProfit;
    }
  }

   // RE
  maxProfitFinder(prices, index + 1);
  cout << maxProfit;
}

int main()
{
  vector<int> prices = {1, 7, 3, 4, 9, 5};
  maxProfitFinder(prices, 0);
  return 0;
}