//8. Write a C++ program to find the sum of the upper triangular matrix.


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
            cout << "A[" << i << "]"
                 << "[" << j << "]=";
            cin >> A[i][j];
        }
        cout<<endl;
    }
    int sum=0;
    // check lower triangle matrix
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (i > j && A[i][j] != 0)
            {
                
                sum=sum+A[i][j];
            }
        }
    }
cout<<"sum of upper triangular matrix= "<<sum;
    
}