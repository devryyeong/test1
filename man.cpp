#include <iostream>
#include <string>
#include "man.h"
#include "family.h"
using namespace std;

Man::Man(string s) {
	name = s;
}

void Man::Setfam(Family *fam) {
	f = fam;
}
void Man::Tellme() {
	string w;
	string c0 = f->getch_f(0);
	string c1 = f->getch_f(1);
	string c2 = f->getch_f(2);
	w = f->getm();
	cout << "나는 " << name << ", 내 아내는 " << w << ", 아이들은 " << c0 <<
		", " << c1 << ", " << c2 << endl;
}

string Man::getdad() {
	return name;
}