#include<iostream>
using namespace std;
int main()
{
    float rad, area, length, breadth, areaofrect;
    cout<<"Enter the Radius of Circle: "<<endl;
    cin>>rad;
    area = 3.14*rad*rad;
    cout<<"\nArea of Circle = "<<area<<endl;
    cout<<endl;




    
   
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth;
    
  
    area = length * breadth;
    

    cout << "Area of Rectangle: " << area;



    return 0;
}