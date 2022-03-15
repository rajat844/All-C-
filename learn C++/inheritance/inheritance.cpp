#include <iostream>
#include "Account.h"
#include "Savings_Account.h"
#include "Account_util.h"
#include "Checking_Account.h"
#include "Trust_Account.h"

using namespace std;

int main()
{
    // std::cout << "\n===Account============================================" << std::endl;
    // Account acc{1000};
    // cout << acc << endl;
    // acc.deposit(2000);
    // cout << acc << endl;
    // acc.withdraw(500);
    // cout << acc << endl;
    // acc.withdraw(5000);
    // cout << acc << endl;
    // std::cout << endl;

    // Account *p_acc{nullptr};
    // p_acc = new Account();
    // std::cout << *p_acc << endl;
    // p_acc->deposit(1000);
    // std::cout << *p_acc << endl;
    // p_acc->withdraw(500);
    // std::cout << *p_acc << endl;
    // p_acc->withdraw(5000);
    // std::cout << *p_acc << endl;
    // delete p_acc;

    // cout << "\n===Savings Account===============================================" << endl;
    // Savings_Account sav_acc{1000, 5.0};
    // cout << sav_acc << endl;
    // sav_acc.deposit(2000);
    // cout << sav_acc << endl;
    // sav_acc.withdraw(500);
    // cout << sav_acc << endl;
    // sav_acc.withdraw(10000);
    // cout << sav_acc << endl;
    // cout << endl;  

    cout.precision(2);
    cout<<fixed;

    //Accounts

    vector<Account> accounts;
    accounts.push_back(Account {});
    accounts.push_back(Account {"larry",1000});
    accounts.push_back(Account{"Moe",2000});
    accounts.push_back(Account{"Corly",5000});

    display(accounts);
    deposit(accounts,1000);
    withdraw(accounts,2000);

    //Savings
    vector<Savings_Account> sav_accounts;
    sav_accounts.push_back(Savings_Account {});
    sav_accounts.push_back(Savings_Account{"Batman",1000,5});
    sav_accounts.push_back(Savings_Account{"Flash",2000,5});
    sav_accounts.push_back(Savings_Account {"Superman",5000,5});

    display(sav_accounts);
    deposit(sav_accounts,1000);
    withdraw(sav_accounts,2000);

    //Checking
    vector<Checking_Account> checking_accounts;
    checking_accounts.push_back(Checking_Account {});
    checking_accounts.push_back(Checking_Account{"Iron Man",1000});
    checking_accounts.push_back(Checking_Account{"Captain America",2000});
    checking_accounts.push_back(Checking_Account {"Thor",5000});

    display(checking_accounts);
    deposit(checking_accounts,1000);
    withdraw(checking_accounts,2000);

    //Trust
    vector<Trust_Account> trust_accounts;
    trust_accounts.push_back(Trust_Account {});
    trust_accounts.push_back(Trust_Account{"Thanos",1000,5});
    trust_accounts.push_back(Trust_Account{"Loki",2000,5});
    trust_accounts.push_back(Trust_Account {"Ultron",5000,5});

    display(trust_accounts);
    deposit(trust_accounts,1000);
    withdraw(trust_accounts,2000);
    deposit(trust_accounts,6000);
    withdraw(trust_accounts,200);




    return 0;
}