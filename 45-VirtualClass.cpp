#include<iostream>
using namespace std;

/*
student --> Test
student -->sports
test -->result
sports -->result
*/

class student{
    protected:
        int roll_no;
    public:
        void setNum(int a){
            roll_no = a;
        }
        void printNum(){
            cout<<"Student roll number is "<<roll_no<<endl;
        }    
};
class test : virtual public student{
    protected:
        float math,physics;
    public:
        void setMarks(float m,float p){
            math = m;
            physics = p;
        }
        void printmark(){
            cout<<"you result is here "<<endl
                <<"Maths: "<<math<<endl
                << "Physics: "<<physics<<endl;
        }
};
class sport : virtual public student{
    protected:
        float score;
    public:
    void setScore(float s){
        score = s;
    }
    void printScore(){
        cout<<"Your PT score is "<<score<<endl;
    }
};

class Result : public test,public sport{
    private:
        float total;
    public:
        void display(){
            total = math + physics + score;
            printNum();
            printmark();
            printScore();
            cout<<"Your total score is "<<total<<endl;
        }
};
int main(){
    Result r;
    r.setNum(89);
    r.setMarks(96,85);
    r.setScore(97);
    r.display();
    return 0;
}