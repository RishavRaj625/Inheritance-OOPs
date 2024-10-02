#include<iostream>
using namespace std;
//base class
class Employee{
    float salary;
    public:
    int id;
        Employee(int r){
            id = r;
            salary = 28960.20;
        }
        void display(){
            cout<<"The id of the employee ("<<id<<") and its monthly salary is "<<salary<<endl;
        }
        Employee(){} // default constructor
};
// Derived class

/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}} {
    // class members/methods/etc...
}
Note:
1. Default visibility mode is private
2. Private visibility mode: public members of the base class becomes private members of the derived class
3. Public visibility mode: public members of the base class becomes public members of the derived class
4. Private members are never inherited
*/

// Creating a programmer class derived from Employee base class

class programmer : Employee{
// class programmer : public Employee{ public means it excess Employee public data
    public:
        programmer(int a){
            id = a;
        }
        void getdata(){
            cout<<id<<endl;
        }
        int code = 25;
};

int main(){
    Employee R(1),S(5);
    R.display();
    S.display();

    programmer skill(10);
    skill.getdata();
    cout<<skill.code;
    return 0;
}