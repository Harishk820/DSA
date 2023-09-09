#include <iostream>
using namespace std;

int main()
{

    int ROWS = 10;
    int COLS = 7;

    for (int row = 0; row < ROWS; row++)
    {
        for (int col = 0; col < COLS; col++)
        {

            if (row == 0 || row == ROWS - 1)
            {
                cout << "* ";
            }
            else
            {
                if (col == 0 || col == COLS - 1)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }
}