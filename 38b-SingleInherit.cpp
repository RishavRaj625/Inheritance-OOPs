#include<iostream>
using namespace std;

class base{
    int a;
    public:
        int b; 
        void setdata();
        int getdata1();
        int getdata2();
};
void base :: setdata(){
    cout<<"Enter the value of a :- ";
    cin>>a;
    cout<<"Ente rthe value of b :- ";
    cin>>b;
}
int base :: getdata1(){
    return a;
}
int base :: getdata2(){
    return b;
}

class derived : private base{
    int c;
    public:
        void process();
        void display();
};
void derived :: process(){
    setdata();  
    c = b * getdata1();
    // c = getdata1() * getdata2(); // both are same
}
void derived :: display(){
    cout<<"The value of a is "<<getdata1()<<endl;
    cout<<"The value of b is "<<b<<endl;
    cout<<"The value of c is "<<c<<endl;
}
int main(){
    derived der;
    // der.setdata(); //setdata yeha use nhi kar sakte setdata ab private ho gya
    der.process();
    der.display();
    return 0;
}