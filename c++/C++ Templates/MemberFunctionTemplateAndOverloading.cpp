#include<iostream>
using namespace std;

template <class T>
class shubham{
    public:
    T data;
    shubham(T a){
        data = a;
    }
    void display(){
        cout<<"Data is "<<data<<endl;
    }
};

void func(int a){
    cout<<"I am first func() "<<a<<endl;
}

template <class T> 
void func(T a){
    cout<<"I am templatised func() "<<a<<endl;
}

int main(){
    // shubham <char>s1('@');
    // s1.display();
    func(6);
    func('A');
    return 0;
}