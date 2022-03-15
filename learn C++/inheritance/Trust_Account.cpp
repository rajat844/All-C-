#include "Trust_Account.h"
#include <iostream>

Trust_Account::Trust_Account(std::string name, double balance, double int_rate)
    : Savings_Account{name, balance, int_rate}, num_withdrawls{0} {}

bool Trust_Account::deposit(double amount)
{
    if (amount >= 5000)
        return Savings_Account::deposit(amount + 50);
    else
        return Savings_Account::deposit(amount);
}
bool Trust_Account::withdraw(double amount)
{
    if (num_withdrawls >= max_withdrawls || (amount > balance * max_withdraw_percent))
        return false;
    else
    {
        ++num_withdrawls;
        return Savings_Account::withdraw(amount);
    }
}
std::ostream &operator<<(std::ostream &os, const Trust_Account &account)
{
    os << "Trust Account: " << account.name << " balance: " << account.balance << " interest rate: " << account.int_rate<<" withdraws: " << account.num_withdrawls;
    return os;
}