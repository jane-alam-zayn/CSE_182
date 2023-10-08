
#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n == 1 || n == 0)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    int terms, i = 0;
    cout << "Fibonacci sequence up to the :";
    cin >> terms;

    cout << "Fibonacci sequence up to the " << terms << "th number:" << endl;
    while (i < terms)
    {
        cout << fibonacci(i) << " ";
        i++;
    }

    return 0;
}
