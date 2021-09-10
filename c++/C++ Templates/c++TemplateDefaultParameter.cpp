#include<iostream>
using namespace std;

template <class T1 = int, class T2 = float>
class shubham{
 public:
 T1 a;
 T2 b;
 shubham(T1 x , T2 y){
      a = x;
      b = y;
 }
 void Display(){
       cout<<this->a<<" ====== "<<this->b<<endl;
 }
};
int main(){
shubham <>s1(7,3.4);
s1.Display();
    return 0;
}