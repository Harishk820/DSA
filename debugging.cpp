/*
Pattern
1
23
345
4567
*/
#include <iostream>
using namespace std;

// int main()
// {
//     int n;
//     int i = 1;
//     while (i < n)
//     {
//         int j = i, count = 1;
//         while (count < i)
//         {
//             cout << j;
//             j = j + 1;
//             count = count + 1;
//         }
//         cout << "\n";
//         i = i + 1;
//     }
// }

// int main()
// {

//     int n = 5;

//     int fact = 1;
//     while (n > 0)
//     {

//         fact = fact * n;
//         // cout << n * (n - 1) << endl;
//         n--;
//     }
//     cout << fact;
// }

//******************* Prime or not************

// int main()
// {
//     int n = 6;
//     for (int i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             cout << " not prime";
//         }
//         else
//             cout << "Prime";
//         break;
//     }
// }

// ******************** maximum number among three ************

// int main()
// {

//     int a = 5, b = 37, c = 9;

//     if (a > b && a > c)
//     {
//         cout << " a is maximum";
//     }
//     else if (b > a && b > c)
//     {
//         cout << " b is maximum ";
//     }
//     else
//         cout << " c is max";
// }

// ********************** Pattern HW *******
// solid square

// int main()
// {

//     for (int i = 0; i < 5; i++)
//     {

//         for (int j = 0; j < 5; j++)
//         {

//             cout << j + 1;
//         }
//         cout << endl;
//     }
// }

//************** Hollow square

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
            {

                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}