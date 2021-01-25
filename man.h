#ifndef MAN_H
#define MAN_H
using namespace std;
class Family;
class Man {
	private:
		string name;
		Family* f;
	public:
		Man(string s);
		void Setfam(Family* fam);
		void Tellme();
		string getdad();
};
#endif