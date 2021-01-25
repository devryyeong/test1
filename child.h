#ifndef CHILD_H
#define CHILD_H
using namespace std;
class Family;
class Child {
	private:
		string name;
		Family *f;
	public:
		Child(string s);
		void Tellme();
		void Setfam(Family* fam);
		string getch();
};
#endif
