/*4. Write a C++ program to find the reverse of an array using the function.*/
#include <iostream>
using namespace std;
void rever(int b[], int c)
{
    cout << "revesre:";
    int i;
    for (i = c - 1; i >= 0; i--)
    {
        cout << b[i] << "   ";
    }

    cout << endl;
}

int main()
{
    int i;
    int A[6] = {0, 1, 2, 3, 4, 5}; cout << "Array :";
    for (i = 0; i < 6; i++)

    {
        cout << A[i] << "  ";
    }
    cout<<endl;
    rever(A, 6);
    return 0;
}