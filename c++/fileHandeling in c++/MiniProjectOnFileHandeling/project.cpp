#include<iostream>
#include<fstream>
#include<iomanip>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class item{
int code;
char name[15];
int qty;
public:
void get_item();
void put_item();
int get_code(){
    return code;
}
void update_qty(int num){
qty = qty-num;
}
};

void item::get_item(){
cout<<"Enter item code : ";cin>>code;
cout<<"Enter item name : ";cin>>name;
cout<<"Enter item quantity : ";cin>>qty;
}

int main(){
    item t1;
    t1.get_item();
    return 0;
}