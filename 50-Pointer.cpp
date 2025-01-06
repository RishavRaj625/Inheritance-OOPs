#include<iostream>
using namespace std;
     
int main(){
    // Basic Example
    int a = 4;
    int *ptr = &a;
    *ptr = 2024;
    cout<<"The value of a is "<<*(ptr)<<endl;

    // New Keyword
    int *p = new int(40);
    float *p1 = new float(55.89);
    string *p2 = new string("Rishu");

    cout<<"The value at address p is "<<*(p)<<endl;
    cout<<"The value at address p1 is "<<*(p1)<<endl;
    cout<<"The value at address p2 is "<<*(p2)<<endl;
    
    int *arr = new int[3];
    arr[0] = 625; 
    arr[1] = 256;  // or *(arr+1)
    arr[2] = 560;

    // Delete Operator
    delete arr;

    cout<<"\nThe value of arr[0] is "<<arr[0]<<endl;
    cout<<"The value of arr[1] is "<<arr[1]<<endl;
    cout<<"The value of arr[2] is "<<arr[2]<<endl;

    return 0;
}
