#include <iostream>
using namespace std;

int reslt(int num1, int num2, char c)
{
    int r;
    if (c == '+')
    {
        r = num1 + num2;
    }
    else if (c == '-')
    {
        r = num1 - num2;
    }
    else if (c == '*')
    {
        r = num1 * num2;
    }
    else if (c == '/')
    {
        r = num1 + num2;
    }
    return r;
}

int main()
{
    int m,var1, var2;
    char oper;
    cout << "Enter number 1: " << endl;
    cin >> var1;
    cout << "Enter number 2: " << endl;
    cin >> var2;
    cout << "enter operator:";
    cin >> oper;
    m =reslt(var1, var2, oper);
    cout << "reslt = " << m;
}
