#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;

int main(){
ifstream read;

//opening file for reading
read.open("file2.txt");
char ch;
// string content;
// int i = 1;
// while(read.eof()==0){ 
// getline(read,content);
// cout<<"Line No. "<<i<<" "<<content<<endl;
// i++;
// }
int pos;
pos = read.tellg();
cout<<pos<<endl;
read>>ch;
// cout<<"ch----->"<<ch<<endl;
pos = read.tellg();
cout<<pos<<endl;
read>>ch;
// cout<<"ch----->"<<ch<<endl;
pos = read.tellg();
cout<<pos<<endl;
getch();



    return 0;
}