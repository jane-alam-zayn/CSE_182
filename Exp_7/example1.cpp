/*Example 1: A C++ Program to find the position of an element from the list of
elements. [Linear Search]*/
#include <iostream>
using namespace std;
int main()

{
    int arr[15], n, i, s, loc;
    cout << "The number of elements: " << endl;
    cin >> n;
    cout << "Enter the numbers: " << endl;
    for (i = 0; i < n; i++)
    {
        cout<<"arr["<<i<<"]=";
        cin >> arr[i];
    }
    cout << "Enter the searching element: ";
    cin >> s;
    loc = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == s)
        {
            loc = 1;
            break;
        }
    }
    if (loc == 1)
    {
        cout << "The element " << s << " is found at location: " << i + 1;
    }
    else
    {
        cout << "The element " << s << " is not in the list." << endl;
    }
    return 0;
}