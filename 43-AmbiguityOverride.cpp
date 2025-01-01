#include<iostream>
using namespace std;

class B{
    public:
        void say(){
            cout<<"Namaste Bharat"<<endl;
        }
};
class D : public B{
    int a;
    // D is new say() method will override base class's say() method
    public:
        void say(){
            cout<<" -: Ambiguity overriding :- "<<endl;
            cout<<"Hello my beautiful laptop"<<endl;
        }

        // void say(){
        //     B::say();
        // }
};
int main(){
    B b;
    b.say();

    D d;
    d.say();
    return 0;
}