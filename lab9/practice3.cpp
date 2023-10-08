/*3. Write a C++ program to get the largest element of an array using the function.*/
#include <iostream>
using namespace std;
int largest(int b[],int n)
{
cout<<"b=";
for (int i = 0; i <=n; i++)

    {
        cout <<b[i]<< "  ";
    }


}
int main()
{
    int A[10], i, j;
    cout << "Enter the element of an array (size 10) :";
    for (i = 0; i <= 9; i++)
    {
        cin >> A[i];
    }
   cout<<"A=";
    for (i = 0; i <= 9; i++)
    {
        cout <<A[i]<< "  ";
    }
    cout<<largest(A,9);
}
