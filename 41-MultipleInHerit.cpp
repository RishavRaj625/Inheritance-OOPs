#include<iostream>
using namespace std;

// Synatx for inheriting in multiple inheritance

// class DerivedC: visibility-mode base1, visibility-mode base2{
//     class body of class "DerivedC"
// }

class base1{
    protected:
        int base1int;
    public:
     void set_base1int(int a){
        base1int = a;
     }
};
class base2{
    protected:
        int base2int;
    public:
     void set_base2int(int b){
        base2int = b;
     }
};

class Derived: public base1,public base2{
    public:
        void show(){
            cout<<"The value of Base1 is "<<base1int<<" and Base2 is "<<base2int;
            cout<<"\nSum of base1 and base2 is "<<base1int+base2int;
        }
};
/*
The inherited derived class will look something like this:
Data members:
base1int --> protected
base2int --> protected
Member functions:
set_base1line() -->public
set_base2line() -->public
set_show() -->public
*/
int main(){
    Derived rishu;
    rishu.set_base1int(25);
    rishu.set_base2int(5);
    rishu.show();
    return 0;
}