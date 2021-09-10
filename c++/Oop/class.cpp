#include<iostream>
#include<list>
using namespace std;

class YoutubeChannel{
public:
string Name;
string OwnerName;
int SubscribersCount;
list<string>PublishedVideoTitles;
};

int main(){

YoutubeChannel ytChannel;
ytChannel.Name = "CodeSmashers";
ytChannel.OwnerName = "shubham";
ytChannel.SubscribersCount = 2000;
ytChannel.PublishedVideoTitles = {"C++ beginners","React js"};
    return 0;
};