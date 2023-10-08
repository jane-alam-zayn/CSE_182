/*2. Write a C++ program to find the diameter, circumference, and area of a circle
using functions.
*/
#include<iostream>
using namespace std;
int diameter(int R)
{
    return 2*R;
}
float circumfernce(int Z)
{
    float c=2*3.1416*Z;
    return c;
}
float Area(int A)
{
float a=3.1416*A*A;
return a;

}
int main()
{
int r;
cout<<"Input the radious of the circle: "<<endl;
cin>>r;
cout<<"Diameter: "<<diameter(r)<<endl;
cout<<"circumference: "<<circumfernce(r)<<endl;
cout<<"Area: "<<Area(r);




}