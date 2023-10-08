// 4. Write a C++ program to check whether two matrices are equal or not
#include <iostream>
using namespace std;
int main()
{
    int r, c,i, j;
    int A[10][10], B[10][10];
    cout << "Enter the number of Row And Colum for matrix A :";
    cin >> r >> c;
    cout << "Enter element A matrix: " << endl;

    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            cout << "A[" << i << "]"
                 << "[" << j << "]=";
            cin >> A[i][j];
        }
        cout << endl;
    }
    
cout<<"input B matrix";
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            cout << "B[" << i << "]"
                 << "[" << j << "]=";
            cin >> B[i][j];
        }
        cout << endl;
    }

    // printining a matrix
    cout << "Matrix A =" << endl;
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            cout << A[i][j] << "   ";
        }
        cout << endl;
    }
    // printining B natrix
    cout << "Matrix b =" << endl;
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            cout << B[i][j] << "   ";
        }
        cout << endl;
    }
    int count = 0;
    // cheacking weather twonareb equal or not

    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            if (A[i][j] != B[i][j])
            {
                count++;
                break;
            }
        }
        cout << endl;
    }

    if (count == 0)
    {

        cout << "Matrix are equal matrix ";
        
    }
    else
        {

            cout << "Matrix are not equal";
        }
    
}
