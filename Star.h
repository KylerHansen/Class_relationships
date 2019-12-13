#pragma once
#include "Actor.h"
#include <iostream>
#include <string>

using namespace std;

class Star :public Actor {
private:
	double balance;

public:
	Star(string n, string a, string s, string c, double b) : Actor(n, a, s, c), balance(b) {}

	virtual void display() {
		Actor::display();
		cout << balance << endl;
	}

	friend ostream& operator<<(ostream& out, Star& me) {
		out << (Actor&)me << " " << me.balance << endl;
		return out;
	}
};