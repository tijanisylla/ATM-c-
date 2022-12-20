#include <iostream>
using namespace std;
// ATM

void showMenu() // show menu
{
    cout << "*********MENU*********" << endl;
    cout << "1. Check balance" << endl;
    cout << "2. Deposite" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Exit" << endl;
    cout << "*********END*********" << endl;
}

int main()
{
    // Check balance, deposite, withdraw,
    int option;
    double balance = 500;
    system("clear");

    do
    {
        showMenu();
        cout << "option: ";
        cin >> option;

        switch (option)
        {
        case 1:
            cout << "Balance is : " << balance << "$" << endl;
            break;

        case 2:
            cout << "Deposite amout :";
            double depositeAmout;
            cin >> depositeAmout;
            balance += depositeAmout;
            break;
        case 3:
            cout << "Withdraw amout :";
            double withdrawAmout;
            cin >> withdrawAmout;

            if (withdrawAmout <= balance)
                balance -= depositeAmout;
            else
                cout << "Not enough money to withdraw 😕" << endl;
            break;
        }
    } while (option != 4);
    system("read>0");
}
