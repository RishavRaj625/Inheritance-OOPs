#include<iostream>
using namespace std;
/*
Syntax for initialization list in constructor:
constructor(argument-list) : initialization-section
{
    assignment+code;
}

class Test{
    int a;
    int b;
    public:
        Test(int i,int j) : a(i),b(j) {constructor-body}
         
        or (Both are same) 
        Test(int i,int j){
            a = i;
            b = j;
            cot<<"Value of a and b is "<<a<<b<<endl;
        }
};
*/ 

class Test{
    int a;
    int b;
    public:
        //1. Test(int i,int j) : a(i),b(j){
        //2. Test(int i,int j) : a(i),b(i+j){
        //3. Test(int i,int j) : a(i),b(2*j){
        //4. Test(int i,int j) : a(i),b(a+j){

        //5. Test(int i,int j) : b(j),a(i+b){ --> Red Flag(error) this will create problems it gives garbage value because 'a' will be initialized first(b ko first intailize karne se ye wala code run ho jayega or garbage value vhi nhi dega)

        // case 6.
        Test(int i,int j) : a(i){  
            b = j; 
            cout<<"Constructor executed.."<<endl;
            cout<<"Value of a is "<<a<<endl;
            cout<<"Value of b is "<<b<<endl;
        }
        /*
        case 7. Test(int i,int j){
            a = i;
            b = j;
        }
        */
};
int main(){
  Test T(8,9);
  return 0;
}
