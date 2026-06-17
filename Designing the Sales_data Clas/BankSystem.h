#pragma once

#include <vector>
#include "BankAccount.h"

class BankSystem
{
private:
    std::vector<BankAccount> accounts;
    int currentAccount = -1;

public:

    void createAccount();
    void showAccounts();
    void selectAccount();

    bool hasActiveAccount() const;

    BankAccount& getCurrentAccount();
};