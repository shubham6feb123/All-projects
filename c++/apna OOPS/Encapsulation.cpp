#include <iostream>
using namespace std;

class A{
    public:
    int a;
    void funcA(){
     cout<<"FuncA\n";
    }


    private:
     int b;
    void funcB(){
     cout<<"FuncB\n";
    }


    protected:
     int c;
    void funcC(){
     cout<<"FuncC\n";
    }
};




int main(){
    
    A obj1;
    obj1.funcA();


    return 0;
}