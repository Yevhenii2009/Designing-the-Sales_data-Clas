#include "BankAccount.h"
#include <iostream>

using namespace std;

BankAccount::BankAccount(string name, double startBalance)
{
    owner = name;
    balance = startBalance;
}

void BankAccount::deposit(double amount)
{
    if (amount <= 0)
    {
        cout << "Invalid amount!\n";
        return;
    }

    balance += amount;
}

void BankAccount::withdraw(double amount)
{
    if (amount <= 0)
    {
        cout << "Invalid amount!\n";
        return;
    }

    if (amount <= balance)
    {
        balance -= amount;
    }
    else
    {
        cout << "Not enough money!\n";
    }
}

void BankAccount::printInfo() const
{
    cout << "Owner: " << owner
        << "\nBalance: " << balance
        << "\n\n";
}

double BankAccount::getBalance() const
{
    return balance;
}

string BankAccount::getOwner() const
{
    return owner;
}