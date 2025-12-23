#include<iostream>
using namespace std;
int main() {
    // A program to calculate the area of a circle
    float pi=3.14;
    float radius;
    cout<<"Enter the radius of the circle: ";
    cin>>radius;
    float area;
    area=pi*radius*radius;
    cout<<"The area of the circle is: "<<area<<endl;
    return 0;
}