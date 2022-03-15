#pragma once
#ifndef _MYSTRING_H
#define _MYSTRING_H

class Mystring {
private: 
	char* str;
public:
	//constructors
	Mystring();
	Mystring(const char* s);
	Mystring(Mystring&& source);
	~Mystring();

	//getters
	void display() const;
	int get_length() const;
	const char get_string() const;



	Mystring operator -() const;
	Mystring operator+(const Mystring& rhs)const;
	bool operator== (const Mystring& rhs)const;
	bool operator!= (const Mystring& rhs)const;
	bool operator>(const Mystring& rhs)const;
	bool operator<(const Mystring& rhs)const;
	Mystring& operator+=(const Mystring& rhs);
	Mystring operator*(int n)const;
	Mystring& operator *=(int n);
	Mystring& operator ++();
	Mystring operator ++(int);








};


#endif // 



