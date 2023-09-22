#include <iostream>
using namespace std;

void coutZeroOne(int arr[], int size)
{
  int zero = 0, one = 0;

  for (int i = 0; i < size; i++)
  {
    if (arr[i] == 0)
    {
      zero++;
    }
    else if (arr[i] == 1)
    {
      one++;
    }
  }
  cout << "zero's count: " << zero << endl;
  cout << "one's count: " << one;
}

int main()
{
  int arr[10] = {1, 0, 1, 0, 1, 0, 1, 1, 0, 1};
  coutZeroOne(arr, 10);
  return 0;
}