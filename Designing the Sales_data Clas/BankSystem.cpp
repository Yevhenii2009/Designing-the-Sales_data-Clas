#include "BankSystem.h"
#include "InputUtils.h"
#include <iostream>

using namespace std;

void BankSystem::createAccount()
{
    string name;
    double balance;

    cout << "Enter owner name: ";
    inputValue(name);

    cout << "Enter starting balance: ";
    inputValue(balance);

    while (balance < 0)
    {
        cout << "Balance cannot be negative. Try again: ";
        inputValue(balance);
    }

    accounts.push_back(BankAccount(name, balance));

    currentAccount = static_cast<int>(accounts.size()) - 1;

    cout << "Account created!\n";
}

void BankSystem::showAccounts()
{
    if (accounts.empty())
    {
        cout << "No accounts found.\n";
        return;
    }

    cout << "\n===== ACCOUNTS =====\n";

    for (int i = 0; i < static_cast<int>(accounts.size()); i++)
    {
        cout << i
            << ". "
            << accounts[i].getOwner()
            << " available balance is "
            << accounts[i].getBalance()
            << endl;
    }
}

void BankSystem::selectAccount()
{
    if (accounts.empty())
    {
        cout << "No accounts found.\n";
        return;
    }

    showAccounts();

    int index;

    while (true)
    {
        cout << "Select account number: ";

        inputValue(index);

        if (index >= 0 &&
            index < static_cast<int>(accounts.size()))
        {
            currentAccount = index;
            cout << "Account selected!\n";
            return;
        }

        cout << "Wrong number! Try again.\n";
    }
}

bool BankSystem::hasActiveAccount() const
{
    return currentAccount != -1;
}

BankAccount& BankSystem::getCurrentAccount()
{
    return accounts[currentAccount];
}