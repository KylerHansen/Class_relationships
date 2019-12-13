#pragma once
#include "Address.h"
#include "Date.h"
#include <iostream>
#include <string>	
using namespace std;

class Person {

private:
	string name;
	Address addr; //composition relationship
	Date* date; //aggregation relationship

public:
	Person(string n, string s, string c) : addr(s, c), date(), name(n) {}

	~Person() {
		if (date != nullptr)
			delete date;
	}

	void setDate(int m, int d, int y) {
		if (date != nullptr)
			delete date;
		date = new Date(m, d, y);
	}

	virtual void display() {
		cout << name << endl;
		addr.display();
		if (date != nullptr)
			date->display();
	}

	string getName() {
		return name;
	}

	friend ostream& operator<<(ostream& out, Person& me) {
		out << me.name << endl;
		out << me.addr << endl;
		if (me.date != nullptr)
			out << *me.date;
		out << endl;

		return out;
	}

};