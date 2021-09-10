#include<iostream>
using namespace std;

int recursive_sum(int m,int n){
    if (m==n)
    return m;
    return m + recursive_sum(m+1,n);
}

//sum numbers between m-n
int main(){
    //without recursion
int m,n;
cout << "Enter the value of m:";
cin >> m;
cout << "Enter the value of n:";
cin >> n;
int sum=0;
for(int i=m;i<=n;i++){
sum += i;
}

cout<<"The sum is : "<<sum<<endl;

//recursive example
int recursion_result = recursive_sum(m,n);
cout<<"From recursion the result is : "<<recursion_result;
    return 0;
}