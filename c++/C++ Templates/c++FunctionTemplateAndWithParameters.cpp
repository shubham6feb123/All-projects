#include<iostream>
using namespace std;
// float funcAverage(int a , int b){
// float avg = (a+b)/2.0;
// return avg;
// }
template<class T1, class T2>
float funcAverage2(T1 a , T2 b){
float avg = (a+b)/2.0;
return avg;
}
int main(){
    float a;
    a = funcAverage2(5.7,2.4);
    printf("The average of these numbers is %.4f",a);
    return 0;
}




