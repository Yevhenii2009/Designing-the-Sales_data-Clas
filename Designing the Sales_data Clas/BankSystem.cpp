#include "BankSystem.h"
#include <iostream>

using namespace std;


void BankSystem::createAccount()
{
    string name;
    double balance;


    cout << "Enter owner name: ";
    cin >> name;


    cout << "Enter starting balance: ";
    cin >> balance;


    BankAccount account(name, balance);

    accounts.push_back(account);


    currentAccount = accounts.size() - 1;


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


    for (int i = 0; i < accounts.size(); i++)
    {
        cout << i
            << ". "
            << accounts[i].getOwner()
            << " avalible balance is "
            << accounts[i].getBalance()
            << endl;
    }
}


void BankSystem::selectAccount()
{
    int index;


    showAccounts();


    cout << "Select account number: ";
    cin >> index;


    if (index >= 0 && index < accounts.size())
    {
        currentAccount = index;

        cout << " Account selected!\n"; 
    }
    else
    {
        cout << "Wrong number!\n";
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