/*1. Write a C++ program to add, subtract, multiply and divide two integers
using the following types of user-defined functions -*/
#include <iostream>
using namespace std;

void zayn()
{
    int a, b,r;
    char o;

    cout << "Enter two number :";
    cin >> a >> b;
    cout << "Enter a operator: ";
    cin >> o;
    if (o == '+')
    {
         r = a + b;
    }
    else if (o == '-')
    {
        r = a - b;
    }
    else if (o == '*')
    {
         r = a * b;
    }
   else  if (o == '/')
    {
         r = a / b;
    }
    cout << "result =" <<r;
}
int main()
{

zayn();


}
