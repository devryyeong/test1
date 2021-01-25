#ifndef WIFE_H
#define WIFE_H
using namespace std;

class Family;
class Wife {
	private:
		string name;
		Family* f;
	public:
		Wife(string s);
		void Setfam(Family* fam);
		string getmom();
};
#endif