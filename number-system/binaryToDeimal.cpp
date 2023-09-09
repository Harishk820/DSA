#include<iostream>
#include<math.h>

using namespace std;

int binarytoDecimal(int num){
    int decimal = 0;
    int i = 0;
    while(num)
    {
    int bit = num % 10;
    decimal = decimal + bit* pow(2, i++);
    num = num / 10;
    }
    return decimal;
}


int main(){

    int num;
    int output;

    cout << binarytoDecimal(1010);
}