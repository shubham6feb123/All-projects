#include <iostream>
using namespace std;

void showMenu()
{
    cout << "*****Menu*****" << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Deposite" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Exit" << endl;
    cout << "*************************" << endl;
}

int main()
{

    //check balance, deposit , withdraw , show menu

    //showing Menu
    int option;
    double balance = 500;
   do{
    showMenu();
    cout << "Choose an option from menu" << endl;
    cin >> option;
    system("cls");
    switch (option)
    {
    case 1:
        // run check balance func..
        cout << "Your current balance is: " << balance<<endl;
        break;
    case 2:
        //run deposit func..
        double depositeAmount;
        cout << "Deposite Amount: ";
        cin >> depositeAmount;
        if (depositeAmount != 0 || 0.0)
        {
            balance += depositeAmount;
        }
       
        break;
    case 3:
        //run withdraw func..
        double withDrawAmount;
        cout << "Withdraw Amount: ";
        cin >> withDrawAmount;
        if (withDrawAmount <= balance)
        {
            balance -= withDrawAmount;
           
        }
        else
        {
            cout << "Not enough money";
        }

        break;
    
    }
    }while(option!=4);

    return 0;
}
