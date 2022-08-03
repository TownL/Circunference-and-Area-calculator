//Circunference and Area calculator
//Jan M. Rodriguez Cumba
//Aug 2,2022

#include <iostream>
#include<math.h>

using namespace std;

const double PI = 3.13;
double radius;

int main()
{
    float area;
    float circumference;
    
    cout<<"Bienvenido a tu calculadora de circunferencia y de area."<<endl;
    cout<<"Porfavor ingrese el valor de su radio:"<<endl;
    cin>>radius;
    
    circumference = 2 * PI * radius;
    area = PI * pow(radius,2);
    
    cout<<"The circumference is " <<circumference<<endl;
    cout<<"The area is " <<area<<endl;
    
    return 0;
    
}

