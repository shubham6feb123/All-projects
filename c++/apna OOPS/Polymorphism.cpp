#include <iostream>;
#include <bits/stdc++.h>;
using namespace std;

//function over loading

class ApnaCode{
public:
void fun(){
    cout<<"I am a function with no arguements\n";
}
void fun(int x){
    cout<<"I am a function with int argument\n";
}
void fun(double x){
    cout<<"I am a function with double argument\n";
}
};


//operator overloading
class Complex{

int real,imaginary;
public:
Complex(int r,int i){
    real = r;
    imaginary = i;
}

Complex operator + (Complex const &obj){
Complex res;
res.imaginary = imaginary + obj.imaginary;
res.real = real + obj.real;
return res;
}

void display(){
    cout<<real<<" + i" <<imaginary<<endl;
}

};

int main (){
 ApnaCode obj;
 obj.fun();
 obj.fun(2.76);
 obj.fun(5);

 //complex class objects
 Complex c1(12,8),c2(3,4);

 Complex c3 = c1 + c2;

 c3.display();



    return 0;
}