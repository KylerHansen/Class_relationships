#pragma once
#include "Person.h"
#include <iostream>
#include <string>

using namespace std;

class Actor : public Person {

private:
	string agent;

public:
	Actor(string n, string a, string s, string c): Person(n,s,c), agent(a) {}

	void display(){
		Person::display();
		cout << agent << endl;
	}

	friend ostream& operator<<(ostream& out, Actor& me) {
		out << (Person&)me/*Upcasting and calls the overloaded insert operator for the Person class*/ << " " << me.agent << endl;
	}



};