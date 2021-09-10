#include<iostream>
using namespace std;
class c2;

class c1{
int val1;
friend void exchange(c1 &,c2 &);
public:
void setData(int a){
val1 = a;
}

void display(){
cout<<val1<<endl;
}
};

class c2{
int val2;
friend void exchange(c1 &,c2 &);
public:
void setData(int a){
val2 = a;
}

void display(){
cout<<val2<<endl;
}
};

void exchange(c1 &x,c2 &y){

int temp = x.val1;

x.val1 = y.val2;

y.val2 = temp;

};

int main(){
    c1 oc1;
    c2 oc2;

    oc1.setData(12);
    oc1.display();

    oc2.setData(14);
    oc2.display();

    exchange(oc1,oc2);

    oc1.display();
    
    oc2.display();
    return 0;
}