#include<iostream>
using namespace std;
// #define SQUARE(X) (X*X)
// class base{
//     public:
//     int t1;
// };
// class derived:protected base{
//     public:
//     int t2;
//     int sum(){return t1+t2;};
// };

class Test{
    public:
    Test();
    ~Test();
};
Test::Test(){
    cout<<"contructor is executed";
}
Test::~Test(){
    cout<<"destructor is executed";
}
int main(){
    // base b;
    // derived d;
    // b.t1 = 10;
    // d.t1 = 20;
    // d.t2 = 30;
    // cout<<d.sum();

    // cout<<SQUARE(7)<<", ";
    // cout<<SQUARE(4+3);
    delete new Test();
    cout<<"hello"<<endl;
    return 0;
}