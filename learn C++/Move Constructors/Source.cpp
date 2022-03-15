#include <iostream>
#include <vector>

using namespace std;

class Move {
private:
	int* data;
public:
	void set_ata_value(int d) { *data = d; }
	int get_data_value() { return *data; }
	//Constructor
	Move(int d);
	//Copy Constructor
	Move(const Move& source);
	//Move Constructor
	Move(Move&& source)noexcept;
	//Destructor
	~Move();
};

Move::Move(int d) {
	data = new int;
	*data = d;
	cout << "Constructor for :" << d << endl;
};

//Copy Constructor
Move::Move(const Move& source)
	:Move{ *source.data } {
	cout << "Copy Constructor --deep copy for :" << *data << endl;
};

//move constructor
Move::Move(Move&& source)noexcept
	:data{ source.data } {
	source.data = nullptr;
	cout << "move constructor-moving resource:" << data << endl;
};

Move::~Move() {
	if (data != nullptr) {
		cout << "freeing data for :" << data << endl;
	}
	else {
		cout << "freeing data for nullptr :" << endl;
	}
	delete data;
}


int main() {
	vector<Move> vec;
	vec.push_back(Move(10));
	
	vec.push_back(Move(20));
	vec.push_back(Move(30));
	vec.push_back(Move(40));
	vec.push_back(Move(50));
	vec.push_back(Move(60));
	vec.push_back(Move(70));
	vec.push_back(Move(80));

	return 0;
}