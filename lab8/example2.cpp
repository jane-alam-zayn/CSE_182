// Example 2: A C++ Program to find the upper triangular matrix.
#include <iostream>
using namespace std;
int main()
{
    int A[10][10];
    int i, j, r, c, count = 0;
    cout << "enter the number of row and cloum";
    cin >> r >> c;
    cout << "enter the elements" << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin >> A[i][j];
        }
    }
    // check upper triangle matrix
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (i > j && A[i][j] != 0)
            {
                cout<<"jane alom";
                count++;
            }
        }
    }

    if (count ==0)
    {
        cout << "\nThe matrix is Upper triangular matrix." << endl;
    }
    else
    {
        cout << "\nThe matrix is not Upper triangular matrix." << endl;
    }
    return 0;
}