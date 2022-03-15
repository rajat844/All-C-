#include <bits/stdc++.h>
#include <iostream>

using namespace std;

class Base {
public:
    virtual void say_hello() const {
        cout << "Hello! I'm a Base class" << endl;
    }
    virtual ~Base() {}
};

class Derived : public Base
{
public:
    virtual void say_hello() const override {
        cout << "Hello! I'm a derived class" << endl;
    }
    virtual ~Derived() {}
};


// void greetings(const Base& obj)
// {
//     cout << "Greetings: ";
//     obj.say_hello();
// }

int main() {
    // Base b;
    // b.say_hello();

    // Derived d;
    // d.say_hello();

    // greetings(b);
    // greetings(d);

    // Base* ptr = new Derived();
    // ptr->say_hello();

    // unique_ptr<Base> ptr1 = make_unique<Derived>();
    // ptr1->say_hello();

    Base* p1 = new Base();
    p1->say_hello();

    Derived* p2 = new Derived();
    p2->say_hello();

    Base* p3 = new Derived();
    p3->say_hello();





    return 0;
}