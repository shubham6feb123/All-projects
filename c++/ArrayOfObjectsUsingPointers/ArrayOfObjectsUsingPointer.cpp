#include <iostream>
using namespace std;

class Shop
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }

    void getData(int i)
    {
        cout<<"-------------x------------x-------------------x-------------x--------------------"<<endl<<endl;
        cout << "id of the item "<<i+1<<" ---------->" << id << endl;
        cout << "price of the item "<<i+1<<" ---------->" << price << endl;
        cout<<"-------------x------------x-------------------x-------------x--------------------"<<endl<<endl;
    }
};

int main()
{
    int size = 3;
    Shop *ptr = new Shop[size];

    for (int i = 0; i < size; i++)
    {
        int id;
        float pr;
        cout << "Enter Id  of item " << (i + 1) << " : ";
        cin >> id;
        cout << "Enter price  of item " << (i + 1) << " : ";
        cin >> pr;

        (ptr + i)->setData(id,pr);
    };

    for (int i = 0; i < size; i++)
    {
        
        (ptr+i)->getData(i);

        
    };

    return 0;
}