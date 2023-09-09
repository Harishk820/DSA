#include <iostream>
using namespace std;

int binaryToDecimal(int num) {
  while (num > 0) {
    int bit = num % 2;
    cout << bit ;
    num = num / 2;
  }
  return 0;
}

int main() {
  int num;
  cout << "Enter Number for conversion: ";
  cin >> num;

  int output=binaryToDecimal(num);
}
