#include<iostream>
#include<string.h>
using namespace std;

class CW{
    protected:
        string title;
        float rating;
    public:
        CW(string s,float r){
            title = s;
            rating = r;
        }
    virtual void display(){  // jaise hi virtual hata denge Class CW display hoga sirf
        cout<<"Base class called...."<<endl;
    } 
}; 
class CWVideo : public CW{
    float videoLength;
    public:
        CWVideo(string s,float r,float vl) : CW(s,r){
            videoLength = vl;
        }
    void display(){
        cout<<"This is an amazing video with title "<<title<<endl;
        cout<<"Rating: "<<rating<<" out of 5 stars"<<endl;
        cout<<"Length of this video is "<<videoLength<<" minutes"<<endl;
    }
};   
class CWText : public CW{
    int words;
    public:
        CWText(string s,float r,int wc) : CW(s,r){
            words = wc;
        }
    void display(){
        cout<<"\nThis is an amazing text tutorial with title "<<title<<endl;
        cout<<"Rating of this text tutorial :  "<<rating<<" out of 5 stars"<<endl;
        cout<<"Number of words in this text tutorial is : "<<words<<" words"<<endl;
    }
};  

int main(){
  string title;
  float rating,vlen;
  int words;

  title = "Django tutorial";
  vlen = 4.56;
  rating = 4.78;
  CWVideo djVideo(title,rating,vlen);
//   djVideo.display();

    
  title = "Django tutorial Text";
  words = 456;
  rating = 4.8;
  CWText djText(title,rating,words);
//   djText.display();

    CW* coding[2];
    coding[0] = &djVideo;
    coding[1] = &djText;
    
    coding[0]->display();
    coding[1]->display();

    return 0;
}
