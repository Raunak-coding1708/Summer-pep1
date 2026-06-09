#include <iostream>
using namespace std;

void main()
{
    float fahrenheit,celsius;
    cout<<"Enter temperature in Fahrenheit: ";
    cin>>fahrenheit;
    celsius=(fahrenheit-32)*5/9;
    cout<<"Temperature in Celsius = "<<celsius;
}
