#include<iostream>
using namespace std;

class BaseClass{
    public:
    int var1;
    void display(){
        cout<<"Display1 "<<var1<<endl;
    }

};

class DerivedClass:public BaseClass{
public:
int var2;
void display(){
    cout<<"Display2 "<<var2<<endl;
}

};

int main(){
BaseClass *Base_class_pointer ;
BaseClass obj_base;

DerivedClass obj_derived;

Base_class_pointer  =  &obj_derived;

Base_class_pointer->var1 = 24;
Base_class_pointer->display();

DerivedClass *derived_class_pointer = &obj_derived;

derived_class_pointer->var2 = 34;
derived_class_pointer->display();

derived_class_pointer->var1 = 200;
derived_class_pointer->var2 = 100;

derived_class_pointer->display();
derived_class_pointer->display();



    return 0;
}