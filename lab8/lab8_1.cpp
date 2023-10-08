// 1. Write a C++ program to add two matrices.
#include <iostream>
using namespace std;

int main()

{
    int r, c, i, j, k;
    int A[10][10], B[10][10], C[10][10];
    cout << "Enter the number of Row And Colum for matrix A :";
    cin >> r >> c;
    cout << "Enter element A matrix: "<<endl;

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
    cout << "Enter the number of Row And Colum for matrix B :";
    cin >> r >> c;
    cout << "Enter element B matrix: "<<endl;

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

//printining a matrix
cout<<"Matrix A ="<<endl;
for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            cout<<A[i][j]<<"   "  ;
        }
        cout << endl;
    }
//printining B natrix
cout<<"Matrix b ="<<endl;
for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            cout<<B[i][j]<<"   " ;
        }
        cout << endl;
    }
    //printining sum of two matrix
    cout<<"Matrix c ="<<endl;
for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            
            cout<<A[i][j]+B[i][j] <<"       ";
        }
        cout << endl;
    }

}