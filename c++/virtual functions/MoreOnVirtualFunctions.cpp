#include<iostream>
#include<cstring>
using namespace std;

class CWH{
protected:
string title;
float rating;
public:
CWH(string s,float r){
    title = s;
    rating = r;
};
virtual void display(){
cout<<"Bogus Code"<<endl;
};
};

class CWHVideo:public CWH{
    float videolenght;
    public:
    CWHVideo(string s,float r , float vl):CWH(s,r){
             videolenght = vl;
    }
    void display(){
        cout<<"This is an amazing video with title "<<title<<endl;
        cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
        cout<<"Length of this video is: "<<videolenght<<endl;
  }
};

class CWHText:public CWH{
int words;
public:
       CWHText(string s ,float r , int wc):CWH(s,r){
           words  = wc;
       };
       void display(){
             cout<<"This is an amazing text tutorial with title "<<title<<endl;
        cout<<"Rating of the text tutorial: "<<rating<<" out of 5 stars"<<endl;
        cout<<"No of words in this tuttorial is: "<<words<<" words"<<endl;
       }
};

int main(){
    string title;
    float rating,vlen;
    int words;

    //for cwh video
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo djVideo(title,rating,vlen);
    // djVideo.display();

    //for CWH text
    title = "Django tutorial text";
    words = 433;
    rating = 4.19;
    CWHText djText(title,rating,words);
    // djText.display();

    CWH* tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();


    return 0;
}