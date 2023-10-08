// 3. Write a C++ program to perform Scalar matrix multiplication
#include <iostream>
using namespace std;
int main()
{
    int A[10][10], n, i, j, r, c;
    cout << "Matrix multiply by  n=";
    cin>>n;
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

    // printining a matrix
    cout << "Matrix A =" << endl;
    for (i = 1; i <= r; i++)
    {
        cout<<"\t \t";
        for (j = 1; j <= c; j++)
        {
            cout << A[i][j] << "   ";
        }
        cout << endl;
    }
    
    cout << "Matrix after multiplication =" << endl;

    for (i = 1; i <= r; i++)
    
    {
        cout<<"\t\t";
        for (j = 1; j <= c; j++)
        {

            A[i][j] = A[i][j] * n;

            cout << A[i][j]<<"   ";
        }
        cout << endl;
    }
}