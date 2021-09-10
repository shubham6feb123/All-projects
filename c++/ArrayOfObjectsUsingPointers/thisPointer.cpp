#include<iostream>
using namespace std;

class A{
    int a;
    public:
   void setData(int a){
        this->a = a;
    }
 
 void getData(){
     cout<<"Value is "<<a<<endl;
 }

};

int main(){
A a1;
a1.setData(2);
a1.getData();

    return 0;
}