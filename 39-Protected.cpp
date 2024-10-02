#include<iostream>
using namespace std;

class Base{
    protected:
        int a;
    private:
        int b;
    
    public:
        void display(){
            cout<<"This is public function in base class....."<<endl;
        }
};

// For a protected member
/*                                 Public Derivation        Private Derivation        Protected Derivation

1. Private members              not inherited                  not inherited            not inherited
2. Protected members                protected                   private                 protected
3. Public members                   public                      private                 protected

*/

class Derived : protected Base{
    
};
int main(){
    Base x;
    Derived y;
    // cout<<y.a;  // will not work since a is protected in both base as well as derived class

    x.display();
    return 0;
}