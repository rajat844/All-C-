// const in constructor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

class Player {
private: 
    std::string name;
    int health;
    int xp;

public:
    std::string get_name() const {
        return name;
    }

    void set_name(std ::string name_val) {
        name = name_val;
    }

    //Overloaded Constructors
    Player();
    Player(std::string name_val);
    Player(std::string name_val, int health_val, int xp_val);
};
Player::Player()
    :name{ "None" }, health{ 0 },xp{ 0 } {}

Player::Player(std::string name_val)
    : name{ name_val }, health{ 0 },xp{ 0 } {}

Player::Player(std::string name_val, int health_val, int xp_val)
    : name{ name_val }, health{ health_val },xp{ xp_val } {}

void display_player_name(const Player& p) {
    cout << p.get_name() << endl;
}


int main()
{
    const Player villian("Villian", 100, 55);
    Player hero{ "Hero",100,15 };
    display_player_name(villian);
    cout << hero.get_name() << endl;

    return 0;

}
  
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
