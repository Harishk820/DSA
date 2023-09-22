#include <iostream>

using namespace std;

int main()
{

  int arr[] = {2, 3, 4, 6};
  int arr2[3] = {2, 4, 56};

  int arr3[5] = {34, 67}; // rest block will occupie value=0
  for (int i = 0; i < 5; i++)
  {
    cout << arr3[i] << " ";
  }

  cout << endl
       << &arr << endl;
  cout << arr << endl;

  return 0;
}