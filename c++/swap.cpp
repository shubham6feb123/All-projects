#include <iostream>
using namespace std;
template<typename T>
void Swap(T& a,T& b){
    T temp = a;
    a=b;
    b=temp;
  cout<<"a : "<< a <<" "<<"b : "<<b<<endl;
}

int main(){
int a=1,b=2;
cout<<"a : "<< a <<" "<<"b : "<<b<<endl;
Swap(a,b);

char c ='c',d='d';
cout<<"c : "<< c <<" "<<"d: "<<d<<endl;
Swap(c,d);

    return 0;
}