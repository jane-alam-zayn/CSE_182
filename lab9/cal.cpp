#include <iostream>
using namespace std;

int addition(int num1, int num2)
{
    int sum;
    sum = num1 + num2;
    return sum;
}


int mins(int num1, int num2)
{
    int min;
    min = num1 - num2;
    return min;
}


int subtraction(int num1, int num2)
{
    int sub;
    sub = num1 * num2;
    return sub;
}


int division(int num1, int num2)
{
    int div;
    div = num1 / num2;
    return div;
}

int main()
{
    int var1, var2, res;
    char c;

    cout << "Enter number 1: " << endl;
    cin >> var1;

    cout << "Enter number 2: " << endl;
    cin >> var2;

    cout << "Enter operator: ";
    cin >> c;

    if (c == '+')  
        res = addition(var1, var2);
    else if (c == '-')
        res = mins(var1, var2);
    else if (c == '*')
        res = subtraction(var1, var2);
    else if (c == '/')
        res = division(var1, var2);

    cout << "Output: " << res << endl;

    return 0;
}
