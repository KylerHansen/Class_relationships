#include"Person.h"
#include"Actor.h"
#include "Star.h"
#include <iostream>
#include <string>

using namespace std;

int main() {

	Person* s2 = new Star("John Wayne", " Cranston Snort","155 Elm", "Ogden",5000000); //upcast star object to a person

	s2->setDate(1960, 12, 25);

	s2->display();
	cout << endl;
	cout << *s2 << endl;

	return 0;
}
