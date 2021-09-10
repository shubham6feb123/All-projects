#include<iostream>
using namespace std;

class Employee{
    //count is static data member
    static int count;
    int id;
    public:
    void setData(){
        cout<<"Enter id : ";
        cin>>id;
        count++;
    };
    void getData(){
        cout<<"Id of the employee is "<<id<<" and this is employee no. "<<count<<endl;
        
    };

//static member function can access all the member data and function And Also....It can be accessed like this no new  object initialization needed Employee::getCount();
    static void getCount(){
        cout<<"The value of count is "<<count<<endl;
    }
};

int Employee::count; //default value is 0

int main(){

Employee shubh,rohan,lovesh;
shubh.setData();
shubh.getData();

Employee::getCount();

rohan.setData();
rohan.getData();

Employee::getCount();

lovesh.setData();
lovesh.getData();

Employee::getCount();

    return 0;
}