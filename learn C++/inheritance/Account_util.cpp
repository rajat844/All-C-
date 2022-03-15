#include "Account_util.h"
#include <iostream>

using namespace std;

void display(const std::vector<Account> &accounts)
{
    std::cout << "\n_______________________ACCOUNTS_____________" << endl;
    for (const auto &acc : accounts)
        std::cout << acc << std::endl;
}

void deposit(std::vector<Account> &accounts, double amount)
{
    std::cout << "\n______________Deposit to ACCOUNTS_____________" << endl;
    for (auto &acc : accounts)
        if (acc.deposit(amount))
            std::cout << "deposited " << amount << " to " << acc << endl;
        else
            std::cout << "failed to deposit" << endl;
}

void withdraw(std::vector<Account> &accounts, double amount)
{
    std::cout << "\n______________Withdraw to ACCOUNTS_____________" << endl;
    for (auto &acc : accounts)
        if (acc.withdraw(amount))
            std::cout << "withdrew " << amount << " to " << acc << endl;
        else
            std::cout << "failed to withdraw" << endl;
}

void display(const std::vector<Savings_Account> &accounts)
{
    std::cout << "\n__________________SAVING ACCOUNTS_____________" << endl;
    for (auto &acc : accounts)
        std::cout << acc << std::endl;
}

void deposit(std::vector<Savings_Account> &accounts, double amount)
{
    std::cout << "\n______________Deposit to SAVINGS ACCOUNTS_____________" << endl;
    for (auto &acc : accounts)
        if (acc.deposit(amount))
            std::cout << "deposited " << amount << " to " << acc << endl;
        else
            std::cout << "failed to deposit" << endl;
}

void withdraw(std::vector<Savings_Account> &accounts, double amount)
{
    std::cout << "\n_____________Withdraw to Savings ACCOUNTS_____________" << endl;
    for (auto &acc : accounts)
        if (acc.withdraw(amount))
            std::cout << "withdrew " << amount << " to " << acc << endl;
        else
            std::cout << "failed to withdraw" << endl;
}

void display(const std::vector<Checking_Account> &accounts)
{
    std::cout << "\n__________________CHECKING ACCOUNTS_____________" << endl;
    for (auto &acc : accounts)
        std::cout << acc << std::endl;
}

void deposit(std::vector<Checking_Account> &accounts, double amount)
{
    std::cout << "\n______________Deposit to CHECKING ACCOUNTS_____________" << endl;
    for (auto &acc : accounts)
        if (acc.deposit(amount))
            std::cout << "deposited " << amount << " to " << acc << endl;
        else
            std::cout << "failed to deposit" << endl;
}

void withdraw(std::vector<Checking_Account> &accounts, double amount)
{
    std::cout << "\n_____________Withdraw to CHECKING ACCOUNTS_____________" << endl;
    for (auto &acc : accounts)
        if (acc.withdraw(amount))
            std::cout << "withdrew " << amount << " to " << acc << endl;
        else
            std::cout << "failed to withdraw" << endl;
}

void display(const std::vector<Trust_Account> &accounts)
{
    std::cout << "\n__________________Trust ACCOUNTS_____________" << endl;
    for (auto &acc : accounts)
        std::cout << acc << std::endl;
}

void deposit(std::vector<Trust_Account> &accounts, double amount)
{
    std::cout << "\n______________Deposit to Trust ACCOUNTS_____________" << endl;
    for (auto &acc : accounts)
        if (acc.deposit(amount))
            std::cout << "deposited " << amount << " to " << acc << endl;
        else
            std::cout << "failed to deposit" << endl;
}

void withdraw(std::vector<Trust_Account> &accounts, double amount)
{
    std::cout << "\n_____________Withdraw to Trust ACCOUNTS_____________" << endl;
    for (auto &acc : accounts)
        if (acc.withdraw(amount))
            std::cout << "withdrew " << amount << " to " << acc << endl;
        else
            std::cout << "failed to withdraw" << endl;
}