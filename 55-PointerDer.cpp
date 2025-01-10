#include<iostream>
using namespace std;

class base{
    public:
        int var_base;
        void display(){
            cout<<"1. Displaying Base class var_base "<<var_base<<endl;
        }
};
class derived : public base{
    public:
        int var_derived;
        void display(){
            cout<<"2. Displaying base class variable var_base.. "<<var_base<<endl;
            cout<<"2. Displaying derived class variable var_derived.. "<<var_derived<<endl;
        }
};
int main(){
    base *base_class_pointer;
    base obj_base;
    derived obj_der;

    base_class_pointer = &obj_der; // Pointing base class pointer to derived class
    base_class_pointer->var_base=34;
    // base_class_pointer->var_derived=34; // Will throw an error

    base_class_pointer->display(); // or (*base_class_pointer).display()

    derived *derived_class_Pointer;
    derived_class_Pointer = &obj_der;
    derived_class_Pointer->var_derived = 500;
    derived_class_Pointer->display();
    
    return 0;
}