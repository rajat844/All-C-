#pragma once
#ifndef _CHECKING_ACCOUNT_H
#define _CHECKING_ACCUNT_H
#include "Account.h"

class Checking_Account : public Account
{
    friend std::ostream &operator<<(std::ostream &os, const Checking_Account &account);

private:
    static constexpr const char *def_name = "Unnamed Checking account";
    static constexpr const double def_balance = 0.0;

public:
    Checking_Account(std::string name = def_name, double balance = def_balance);
    bool withdraw(double amount);
};

#endif