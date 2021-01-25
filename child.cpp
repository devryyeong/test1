#include <iostream>
#include <string>
#include "child.h"
#include "family.h"
using namespace std;

Child::Child(string s) {
	name = s;
}

void Child::Setfam(Family *fam) {
	f = fam;
}

void Child::Tellme() {
	string m, d;
	string c1, c2;

	m = f->getm();
	d = f->getd();
	c1 = f->getch_f(1);
	c2 = f->getch_f(2);

	cout << "나는 " << name << ", 아버지는 " << d << ", 어머니는 " << m << ", 형제들은 " << c1 << ", " << c2 << endl;
}

string Child::getch() {
	return name;
}