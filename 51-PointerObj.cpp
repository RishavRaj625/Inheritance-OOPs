#include<iostream>
using namespace std;

class complex{
    int real,imaginary;
    public:
        void setData(int x,int y){
            real = x;
            imaginary = y;
        }
        void getdata(){
            cout<<"Value of real part is "<<real<<endl;
            cout<<"Value of imaginary part is "<<imaginary<<"i"<<endl;
        }
};     
int main(){

    cout<<"\n <----First method without pointer----> "<<endl;
    complex c;
    c.setData(8,9);
    c.getdata();

    cout<<"\n <----Second method by using pointer----> "<<endl;
    complex c1;
    complex *ptr = &c1;
    (*ptr).setData(2005,2027);
    (*ptr).getdata();

    cout<<"\n <----Third method by using pointer----> "<<endl;
    complex *p = new complex;
    (*p).setData(33,225);
    (*p).getdata();

    cout<<"\n <----Fourth method by using Arrow operator----> "<<endl;
    complex *A = new complex;
    A->setData(67,79);
    A->getdata();

    cout<<"\n <----Arrays using object----> "<<endl;
    complex *Arr = new complex[2];
    Arr->setData(5,6);
    Arr->getdata();
    return 0;
}
