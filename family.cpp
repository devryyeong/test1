#include <iostream>
#include "man.h"
#include "wife.h"
#include "family.h"
#include "child.h"
using namespace std;

Family::Family(Man* m, Wife* w) {
	mom = w;
	dad = m;
	cnt = 0;
	m->Setfam(this);
	w->Setfam(this);
}

void Family::AddChild(Child* c) {
	i[cnt] = c;
	i[cnt]->Setfam(this);
	cnt++;
}

string Family::getch_f(int n) {
	string c;
	c = i[n]->getch();
	return c;
}

string Family::getm() {
	string m;
	m = mom->getmom();
	return m;
}

string Family::getd() {
	string d;
	d = dad->getdad();
	return d;
}