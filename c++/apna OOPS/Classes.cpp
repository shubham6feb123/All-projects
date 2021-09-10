#include <iostream>
using namespace std;
class student{
public:
string name;
int age;
string gender;


//default contructor automatically call when an object is initialized
student(){
cout<<"Default Constructor"<<endl;
};


//parameterized constructor
student(string n,int a,string g){
    name=n;
  age = a;
  gender = g;
  cout<<"Parameterized constructor"<<endl;
}

//Default copy constructor 
student(student &a){
    name = a.name;
    age = a.age;
    gender = a.gender;
 cout<<"Default copy constructor"<<endl;
}

 void printInfo(){
    cout<<"Your Name is"<<" : "<<name<<"\n";
    cout<<"Your Age is"<<" : "<<age<<"\n";
    cout<<"Your Gender is"<<" : "<<gender<<"\n";
 } 

//Destructor When an object destroy it will call
~student(){
    cout<<"Destructor call"<<endl;
}

//operator overloading
bool operator == (student &a){
    if(name==a.name && age==a.age && gender==a.gender){
        return true;
    }else{
        return false;
    }
}

};


int main (){

// Student s1;
// s1.age = 12;
// s1.gender = "male";
// s1.name = "shubham";

// cout << "Name---->"<<s1.name<<'\n';
// cout << "Age----->"<<s1.age<<'\n';
// cout << "Gender---->"<<s1.gender<<'\n';

//Making object using for loop and array  Or objects in array

// student s1[1];
// cout<<"Looping is starting from here"<<endl;
// for(int i=0;i<1;i++){
//     cout<<"Name--->";
//     cin>>s1[i].name;
//     cout<<"Age--->";
//     cin>>s1[i].age;
//     cout<<"Gender--->";
//     cin>>s1[i].gender;
// }

// for(int i=0;i<1;i++){
//     cout<<"Your Name is"<<" : "<<s1[i].name<<"\n";
//     cout<<"Your Age is"<<" : "<<s1[i].age<<"\n";
//     cout<<"Your Gender is"<<" : "<<s1[i].gender<<"\n";
// };

student a("rahul",19,"male");

a.printInfo();

student b("shubham",20,"male");

//object c copying object a
student c(a); // OR  student c = a;

cout<<"Copy Contructor is starting"<<endl;
c.printInfo();

if(b==a){
    cout<<"Same"<<endl;
}
else{
    cout<<"Not Same"<<endl;
}
    return 0;
}

