#include<iostream>
using namespace std;

class A{
    int a;
    public:
        /* 
        A &setData(int a){
            this->a = a;
            return *this;
        }
        or
        */
        void setData(int a){
            this->a = a;
        }
        void getData(){
            cout<<"Value of a is "<<a<<endl;
        }
};    
int main(){
    // this pointer :-  It is a keyboard which is a pointer which points to the object which invokes the member function
  A a;
  a.setData(15);
  a.getData();
  return 0;
}
