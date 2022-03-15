#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <iostream>

using namespace std;

class Account
{
	friend ostream& operator << (ostream& os, Account& account);
	double balance;
public:
	double balance;
	Account();
	Account(double amount);
	void deposit(double amount);
	void withdraw(double amount);
};

#endif 