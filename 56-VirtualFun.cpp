#include<iostream>
using namespace std;

class B{
    public:
        float a = 25.5;
        float b = 98.69;
    virtual void display(){
        cout<<"\n1. base class Called.."<<endl;
        cout<<"1. Addition of a + b = "<<a+b<<endl;
    }
};
class D : public B{
    public:
        float km = 15.59;
        float m = 9695.8;
    void display(){
        cout<<"\n2. Base class inside the derived class...& multiplication of a*b = "<<a*b<<endl;
        cout<<"2. Inside the derived class..."<<endl;
        cout<<"2. Value of Kilometer to meter is "<<km*1000<<" M "<<endl;
        cout<<"2. value of Metre to Kilometre is "<<m/1000<<" Km "<<endl;
    }
};
int main(){
    B *base_class;
    B base;
    D derived;
    base_class = &derived;  
    base_class->display(); // if there will be not virtual class in Class B (Base) then it will give the Class B (Base)display output         or       Here in class B (Base) we are using virtual function that's why class B (Base) output not printed. using of virtal classs it display the output of derived class 

    base.display();  // Displaying the Class B (Base) output

    D *derived_class;
    derived_class = &derived;
    derived_class->display(); // Displaying the Class D (Derived) output

    return 0;
}