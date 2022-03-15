#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player {
private:
	string name;
	int health{ 100 };
	int xp{ 3 };
public:
	void setName(string nameVal) {
		name = nameVal;
	}

	string getName() {
		return name;
	}
	int getHealth() {
		return health;
	}
	int getXp() {
		return xp;
	}

	Player(string in = "None", int he = 0, int x = 0);

	Player(const Player& source);

	~Player() {
		cout << "Destructor Called for " << name << endl;
	}
};

Player::Player(string in, int he, int x)
	:name{ in }, health{ he }, xp{ x } {
}

Player::Player(const Player& source) 
	: name(source.name), health(source.health), xp(source.xp) {
	cout << "Copy constructor of " << source.name << endl;
}
void displayPlayer(Player p) {
	cout << "Name :" << p.getName() << endl;
	cout << "Health :" << p.getHealth() << endl;
	cout << "XP :" << p.getXp() << endl;
}

int main() {
	Player empty;
	displayPlayer(empty);
	Player frank{ "Frank" };
	displayPlayer(frank);
	Player villian{ "Villian", 100,55 };
	displayPlayer(villian);
	Player Hero{ "Hero",100 };
	displayPlayer(Hero);
	Player newHero(Hero);

	return 0;
}