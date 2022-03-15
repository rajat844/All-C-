#include <bits/stdc++.h>
#include <iostream>

using namespace std;

class Account {
public:
    virtual void withdraw(double amount) {
        cout << "in account withdraw" << endl;
    }
    virtual ~Account() {
        cout << "Account::destructor" << endl;
    }
};

class Checking : public Account {
public:
    void withdraw(double amount) {
        cout << "in checking withdraw" << endl;
    }
    virtual ~Checking() {
        cout << "Chaecking::destructor" << endl;
    }
};
class Savings : public Account {
public:
    void withdraw(double amount) {
        cout << "in savings withdraw" << endl;
    }
    ~Savings() {
        cout << "Savings::destructor" << endl;
    }
};

class Trust : public Account {
public:
    void withdraw(double amount) {
        cout << "in trust withdraw" << endl;
    }
    virtual ~Trust() {
        cout << "Trust::destructor" << endl;
    }
};

void do_withdraw(Account& account, double amount) {
    account.withdraw(amount);
}

int main() {
    // cout << "\n _______pointers___________" << endl;
    // Account* p1 = new Account;
    // Account* p2 = new Savings;
    // Account* p3 = new Checking;
    // Account* p4 = new Trust;

    // p1->withdraw(1000);
    // p2->withdraw(1000);
    // p3->withdraw(1000);
    // p4->withdraw(1000);

    // cout << "\n_______clean up_________" << endl;
    // delete p1;
    // delete p2;
    // delete p3;
    // delete p4;

    Account a;
    Account& ref = a;
    ref.withdraw(500);

    Trust b;
    Account& ref1 = b;
    ref1.withdraw(500);

    Account a1;
    Savings s1;
    Checking c1;
    Trust t1;

    do_withdraw(a1, 1000);
    do_withdraw(s1, 1000);
    do_withdraw(c1, 1000);
    do_withdraw(t1, 1000);

    return 0;
}