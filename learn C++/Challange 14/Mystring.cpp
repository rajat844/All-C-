#include "Mystring.h"
#include <iostream>
#include <string>
#include <cstring>
#include <string.h>

using namespace std;

Mystring::Mystring()   //No args constructor
	:str{ nullptr } {
	str = new char[1];
	*str = '\0';
}

Mystring::Mystring(Mystring&& source) //Move constructor
	: str{ source.str } {
	source.str = nullptr;
}

//Mystring::Mystring(const Mystring& source) //copy constructor
//	: str{ nullptr } {
//	str = new char[strlen(source.str) + 1];
//	strcpy(str, source.str);
//}

Mystring::~Mystring() {
	delete[]str;
}

//display
void Mystring::display() const {
	cout << str << " " << get_length() << endl;
}

int Mystring::get_length() const {
	return strlen(str);
}

const char Mystring::get_string() const {
	char* a = str;
	return *a;
}

Mystring Mystring::operator-()const {
	char* buff = new char[std::strlen(str) + 1];
	strcpy(buff, str);
	for (size_t i = 0; i < strlen(buff); i++)
		buff[i] = tolower(buff[i]);
	Mystring temp{ buff };
	delete[] buff;
	return temp;
}

Mystring Mystring::operator+(const Mystring& rhs)const {
	char* buff = new char[strlen(str) + strlen(rhs.str) + 1];
	strcpy(buff, str);
	strcat(buff, rhs.str);
	Mystring temp{ buff };
	delete[]buff;
	return temp;
}

bool Mystring ::operator==(const Mystring& rhs)const {
	return (strcmp(str, rhs.str) == 0);
}

bool Mystring ::operator!=(const Mystring& rhs)const {
	return !(strcmp(str, rhs.str) == 0);
}

bool Mystring::operator<(const Mystring& rhs)const {
	return (strcmp(str, rhs.str) < 0);
}

bool Mystring ::operator>(const Mystring& rhs)const {
	return(strcmp(str, rhs.str) > 0);
}

Mystring& Mystring:: operator+= (const Mystring &rhs) {
	*this +=  rhs;
	return *this;
}

Mystring Mystring::operator*(int n)const {
	Mystring temp;
	for (int i = 1; i <= n; i++)
		temp += *this;
}

Mystring& Mystring ::operator*=(int n) {
	*this *= n;
	return *this;
}

