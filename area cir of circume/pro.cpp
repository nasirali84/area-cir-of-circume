#include <iostream>
using namespace std;

int main()
{
    // Given the radius of the circle predict whether numerically area of this circle is larger than the circumference or not

    int radius;
    float pi = 3.14;
    cout<<"Enter the radius: ";
    cin>>radius;
    float circumference = 2*pi*radius;
    float circle = pi*radius*radius;

    if(circle > circumference){
        cout<<"Area of circle is grater than circumference";
    }else if(circle = circumference){
        cout<<"Area of circle is equal to circumference";
    }else{
        cout<<"Area of circle is less than circumference";
    }
    return 0;
}