#include<iostream>
using namespace std;

class base1{
    public:
        void greet(){
            cout<<"How are you buddy?"<<endl;
        }
};
class base2{
    public:
        void greet(){
            cout<<"kaise ho balak"<<endl;
        }
};

class derived : public base1, public base2{
    int a;
    public:
        void greet(){
            cout<<"Ambiguity Resolution resolved here..."<<endl;
            base1::greet();
            base2::greet();
        }
};
int main(){
    base1 obj1;
    obj1.greet();
    base2 obj2;
    obj2.greet();

    derived d;
    d.greet();
    return 0;
}