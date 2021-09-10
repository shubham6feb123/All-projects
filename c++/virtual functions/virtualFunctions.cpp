#include<iostream>
#include<cstring>
using namespace std;

class BaseClass{
    public:
    int var1 = 12;
  virtual void display(){
        cout<<"Display1 "<<var1<<endl;
    }

};

class DerivedClass:public BaseClass{
public:
int var2 = 26;
void display(){
    cout<<"Display2 "<<var2<<endl;
}

};

class Shubham{
protected:
char title[30];
float rating;
public:
   Shubham(char *s, float r){
          strcpy(title,s);
          rating = r;

}

virtual void display(){};

};

int main(){
BaseClass *Base_class_pointer ;
BaseClass obj_base;
DerivedClass obj_derived;

Base_class_pointer = &obj_derived;
Base_class_pointer->display();



    return 0;
}