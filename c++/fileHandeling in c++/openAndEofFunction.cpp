#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    //writing data in file
ofstream out;
out.open("index.html",ios::app);
out<<"This is me again yoooo";
out.close();

//reading file
ifstream in;
in.open("file2.txt");
string content;

while(in.eof()==0){
 getline(in,content);
cout<<content<<endl;
};

in.close();
    return 0;
}