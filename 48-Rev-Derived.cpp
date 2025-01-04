#include<iostream>
#include<math.h>
#include<string>
using namespace std;

class G{
    string name;
    public:
        G(string n){
            name = n;
        }
        void PrintName(){
            cout<<"\nVirtual base class called...."<<endl;
            cout<<"Name of the student is "<<name<<endl;
        }
};

class A{
    int data1,data2;
    public:
        A(int x,int y){
            data1 = x;
            data2 = y;
            cout<<"Base A is called..."<<endl;
        }
        void display(){
            cout<<"\nEmployee id of Base-A company is "<<data1<<endl;
            cout<<"Employee id of Base-A company is "<<data2<<endl;
        }
};
class B {
    int val1,val2;
    public:
        B(int R,int S){
            val1 = R;
            val2 = S;
            cout<<"Base B is called..."<<endl;
        }
        void print(){
            cout<<"Value of x in Base-B is "<<val1<<endl;
            cout<<"Value of y in Base-B is "<<val2<<endl;
            cout<<"Square root of value x is "<<sqrt(val1)<<endl;
            cout<<"Multiplication of x and y is "<<val1*val2<<endl;
        }
};
class D : public A,public B,public virtual G{   // public G or public virtual G
    float km,m;
    public:
        D(int a,int b,int c,int d,float e,float y,string Ri) : A(a,b),B(c,d),G(Ri){
            km = e;
            m = y;
            cout<<"Derived Class called..."<<endl;
        }
        void PrintNum(){
            cout<<"\nA car covered "<<km<<" km in road show.."<<endl;
            cout<<"Whereas auto covered "<<m<<" m distance in road show..."<<endl;
            cout<<"Total distance covered by Car and Auto(in km) in road show is "<<(km)+(m/1000)<<endl;
        }
};
int main(){

    D Code(1050,16,25,75,125.5,1259.8,"Rishu");
    Code.display();
    Code.print();
    Code.PrintNum();
    Code.PrintName();
    return 0;
}