#include <iostream>
#include "BankAccount.h"

using namespace std;

int main()
{
    BankAccount account("John", 1000);

    account.printInfo();

    account.deposit(500);

    account.printInfo();

    account.withdraw(300);

    account.printInfo();

    cout << "Owner: "
        << account.getOwner()
        << endl;

    cout << "Current balance: "
        << account.getBalance()
        << endl;

    return 0;
}