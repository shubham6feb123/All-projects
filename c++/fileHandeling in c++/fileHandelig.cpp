#include<iostream>
#include<fstream>
using namespace std;
/*FILE HANDELING IN C++
----->3 useful classes
1.fstreambase
2.ifstream ---->Derived from 1(reading)
3.ofstream ---->Derived from 1(writing)
*/



int main(){
    //writing file
    ofstream out("file.txt");
    string name;
    cout<<"Enter Your Name :";
    cin>>name;
    out<<name;
    out.close();

    //reading file
ifstream in("file.txt");
string content;
in>>content;


cout<<"Content in file : "<<content;


//getting complete line content of file
// getline(in,content);
// cout<<content<<endl;

    return 0;
}