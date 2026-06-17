#pragma once

#include <string>

class BankAccount
{
private:
    std::string owner;
    double balance;

public:
    // Constructor
    BankAccount(std::string name, double startBalance);

    // Interface
    void deposit(double amount);
    void withdraw(double amount);
    void printInfo() const;

    double getBalance() const;
    std::string getOwner() const;
};