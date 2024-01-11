#include <iostream>
#include <vector>
using namespace std;

// rob max amount
//  adjecent ko nhi rob kar skte police aa jayegi

int robMax(vector<int> &House, int index)
{
  // base case
  if (index >= House.size())
    return 0;
  // One case sol

  int robAmt1 = House[index] + robMax(House, index + 2);
  int robAmt2 = 0 + robMax(House, index + 1);

  return max(robAmt1, robAmt2);
}
int main()
{
  vector<int> House = {1, 2, 3, 4, 5, 6};
  cout << robMax(House, 0);
  return 0;
}