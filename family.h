#ifndef _FAMILY_H
#define _FAMILY_H
using namespace std;

class Man;
class Wife;
class Child;

class Family {
	private:
		Child* i[20];
		int cnt; //자식 수 카운트
		Wife* mom;
		Man* dad;
	public:
		Family(Man* m, Wife* w);
		void AddChild(Child* c);

		string getch_f(int n);
		string getm();
		string getd();
};
#endif