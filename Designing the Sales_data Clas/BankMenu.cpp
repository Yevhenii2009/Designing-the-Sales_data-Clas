#include <iostream>
#include "BankMenu.h"
#include "InputUtils.h"

using namespace std;

void BankMenu::showMenu()
{
    cout << "\n===== BANK MENU =====\n";
    cout << "1. Show account info\n";
    cout << "2. Deposit money\n";
    cout << "3. Withdraw money\n";
    cout << "4. Show owner\n";
    cout << "5. Show balance\n";
    cout << "0. Exit\n";
    cout << "Choice: ";
}

void BankMenu::run(BankAccount& account)
{
    int choice;

    do
    {
        showMenu();
        inputValue(choice);

        if (choice == 1)
        {
            account.printInfo();
        }
        else if (choice == 2)
        {
            double amount;

            cout << "Amount to deposit: ";
            inputValue(amount);

            while (amount <= 0)
            {
                cout << "Enter positive amount: ";
                inputValue(amount);
            }

            account.deposit(amount);

            cout << "Now "
                << account.getOwner()
                << " balance is "
                << account.getBalance()
                << endl;
        }
        else if (choice == 3)
        {
            double amount;

            cout << "Amount to withdraw: ";
            inputValue(amount);

            while (amount <= 0)
            {
                cout << "Enter positive amount: ";
                inputValue(amount);
            }

            account.withdraw(amount);

            cout << "Now "
                << account.getOwner()
                << " balance is "
                << account.getBalance()
                << endl;
        }
        else if (choice == 4)
        {
            cout << "Owner: "
                << account.getOwner()
                << endl;
        }
        else if (choice == 5)
        {
            cout << "Balance: "
                << account.getBalance()
                << endl;
        }
        else if (choice == 0)
        {
            cout << "Goodbye!\n";
        }
        else
        {
            cout << "Invalid choice!\n";
        }

    } while (choice != 0);
}