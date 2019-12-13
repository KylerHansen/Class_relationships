#pragma once
#include <iostream>
#include <string>

using namespace std;

class Date {

private:
	int month;
	int day;
	int year;

public:

	Date(int m, int d, int y): month(m), day(d), year(y) {}

	void display() {
		cout << month << " " << day << " " << year << endl;
	}

	friend ostream& operator<<(ostream& out, Date& me) {
		out << me.month<< " " << me.day << " " << me.year;
		return out;
	}

};