#include<iostream>
using namespace std;
class Complex{
int a,b;

public:
void setNumber(int n1,int n2){
    a = n1;
    b = n2;
}

void printNumber(){
    cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
}

//------sum complex is now friend function of class complex which takes complex class objects with datatype complex-----//
friend Complex sumComplex(Complex c1, Complex c2);

};

Complex sumComplex(Complex c1,Complex c2){
   Complex c3;
  c3.setNumber((c1.a+c2.a),(c1.b+c2.b));
 return c3;
};


int main(){
    Complex c1,c2 ,sum;
    c1.setNumber(3,4);
    c1.printNumber();



    c2.setNumber(4,3);
    c2.printNumber();


sum = sumComplex(c1,c2);

sum.printNumber();

    return 0;
}




/*Properties of Friend Function
1.Not member function of class....
2.Can not  be invoked without the help of any object of class...
3.Usually contains the objects of that class  as aruguments...
4.Can be declared in private and public section of class...





*/