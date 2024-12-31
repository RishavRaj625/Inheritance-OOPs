#include<iostream>
using namespace std;

class Student{
    protected:
        int roll_num;
    public:
        void set_Roll_num(int);
        void get_Roll_num();
};
void Student:: set_Roll_num(int r){
    roll_num = r;
}
void Student::get_Roll_num(){
    cout<<"The roll number is "<<roll_num<<endl;
}

class Exam : public Student{
    protected:
        float math;
        float physic;
    public:
        void set_marks(float,float);
        void get_marks();
};
void Exam :: set_marks(float m,float p){
    math = m;
    physic = p;
}
void Exam :: get_marks(){
    cout<<"Marks obtained by student in math are "<<math<<endl;
    cout<<"Marks obtained by student in physic are "<<physic<<endl;
}

class Result : public Exam{
    float percentage;
    public:
        void display_result(){
            get_Roll_num();  // making inheritance we can call the function anywhere and int main
            get_marks();
            cout<<"Percentage of student is "<<(math+physic)/2<<"%"<<endl;
        }
};
int main(){
    Result rishu;
    rishu.set_Roll_num(625);
    rishu.set_marks(96,86);
    rishu.display_result();

}