#include<iostream>
using namespace std;

//forward declaration to tell X that Y class is next to you....
class Y;

class X{
    int data;
    friend void add(X o1,Y o2);
    public:
    void setValue(int value){
        data  = value;
    }
};

class Y{
    int num;
    friend void add(X o1,Y o2);
    public:
    void setValue(int value){
        num = value;
    }
};

void add(X o1, Y o2){
cout<<"Summing data of X and Y objects gives me "<<o1.data+o2.num<<endl;
};

int main(){
X o1;
Y o2;

o1.setValue(12);
o2.setValue(20);

add(o1,o2);


    return 0;
}