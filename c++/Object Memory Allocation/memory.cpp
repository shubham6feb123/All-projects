#include <iostream>
using namespace std;


//using arrays in a class
class Shop{
    int itemId[100];
    int itemPrice[100];
    int counter;
    public:
    void initCounter(){
        counter = 0;
    }

    void setPrice();
    void displayPrice();

};

void Shop::setPrice(){
    cout<<"Enter Id of item no "<<counter<<" : ";
    cin>>itemId[counter];
    cout<<"Enter price of item no "<<counter<<" : ";
    cin>>itemPrice[counter];
    counter++;
};

void Shop::displayPrice(){
for(int i=0;i<counter;i++){
    cout<<"Price of Item with Id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
}
};


int main (){
  Shop dukaan;
  dukaan.initCounter();
  dukaan.setPrice();
  dukaan.setPrice();
  dukaan.setPrice();
  dukaan.displayPrice();

    return 0;
}
