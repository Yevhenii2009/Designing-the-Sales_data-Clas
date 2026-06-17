#pragma once
#include "BankAccount.h"

class BankMenu
{
public:
    void run(BankAccount& account);

private:
    void showMenu();
};
