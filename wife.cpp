#include <iostream>
#include "wife.h"
#include "family.h"
using namespace std;

Wife::Wife(string s) {
	name = s;
}

void Wife::Setfam(Family* fam) {
	f = fam;
}

string Wife::getmom() {
	return name;
}