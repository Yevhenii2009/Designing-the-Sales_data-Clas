#include <iostream>

#include "BankAccount.h"
#include "BankMenu.h"

using namespace std;


int main()
{
    string owner;
    double startBalance;


    cout << "Enter owner name: ";
    cin >> owner;


    cout << "Enter starting balance: ";
    cin >> startBalance;


    BankAccount account(owner, startBalance);


    BankMenu menu;

    menu.run(account);


    return 0;
}