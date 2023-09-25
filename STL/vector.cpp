#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> vec)
{
  int size = vec.size();
  if (size == 0)
  {
    cout << "vector empty";
  }
  for (int i = 0; i < size; i++)
  {
    // cout << vec[i] << " ";

    cout << vec.at(i) << " "; // prints elements in vector like in previous line
  }
}

int main()
{
  // in vector we don't have to tell size - we simply can keep inserting the element
  // - Vector is just an array of dynamic size.

  vector<int> v;         // Vector initialization
  vector<int> arr(5, 1); // initialised with value 1 and size 5(which can be inclreased)

  printVector(arr); // --> 1 1 1 1 1
  cout << endl;

  arr.push_back(343); //--> 1 1 1 1 1 343
  printVector(arr);
  cout << endl;

  vector<int> arr2 = {1, 2, 3, 4, 5}; // push pop methods also works in this
  printVector(arr2);                  //---> prints 1 2 3 4 5
  cout << endl;

  //*************  Coping the vector

  vector<int> arr3(arr);
  cout << "printing copied vector: ";
  printVector(arr3); // -->  1 1 1 1 1 343
  cout << endl;

  //********** Insertion

  v.push_back(10);
  v.push_back(22);
  v.push_back(33);
  v.push_back(44);

  printVector(v);

  //***********  Deletion---->END
  cout << endl;
  v.pop_back();
  printVector(v); //  -> 10 22 33

  // ******* clear vector

  v.clear();
  printVector(v); //--> vector empty

  return 0;
}