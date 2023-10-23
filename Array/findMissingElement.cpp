#include <iostream>
using namespace std;

// ******* M-2 XOR approach
void FindMissingElement2(int arr[], int size)
{
  int ans = 0;
  for (int i = 0; i < size; i++)
  {
    // 1.XOR all value of array
    ans ^= arr[i];

    // 2. XOR all values [0,N]

    for (int i = 0; i < size; i++)
    {
      ans ^ i;
    }
  }
  cout << "Missing Element: " << ans;
}

//************ M-1 sum approach
void findMissingElement(int arr[], int size)
{

  int sum = 0;
  for (int i = 0; i < size; i++)
  {
    sum = sum + arr[i];
  }
  int totalSum = ((size) * (size + 1)) / 2;
  int missingElement = totalSum - sum;
  cout << missingElement;
}

int main()
{

  int arr[] = {1, 2, 3, 5, 6, 7, 8};
  int n = 8;
  FindMissingElement2(arr, n);

  return 0;
}