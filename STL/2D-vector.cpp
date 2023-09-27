#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<vector<int>> v(5, vector<int>(10, 2));

  // printing vector

  for (int i = 0; i < v.size(); i++)
  {
    for (int j = 0; j < v[i].size(); j++)
    {
      cout << v[i][j] << " ";
    }
    cout << endl;
  }

  //****************** jagged array

  vector<vector<int>> brr;

  vector<int> v1(4, 0);
  vector<int> v2(7, 4);
  vector<int> v3(5, 5);
  vector<int> v4(9, 3);
  vector<int> v5(2, 1);

  brr.push_back(v1);
  brr.push_back(v2);
  brr.push_back(v3);
  brr.push_back(v4);
  brr.push_back(v5);

  cout << "Jagged array:-" << endl;

  for (int i = 0; i < brr.size(); i++)
  {
    for (int j = 0; j < brr[i].size(); j++)
    {
      cout << brr[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}