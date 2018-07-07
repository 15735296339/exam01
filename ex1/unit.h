#ifndef UNIT_H
#define UNIT_H
#include <iostream>
using namespace std;

class unit{
	private:
		string name;
		string type;
		int posX;
		int posY;
		int dam;
		int cHP;
		int mHP;
	public:
		unit(string,string,int,int,int,int,int);
		unit(unit&);
		~unit();
		unit& operator=( unit&) ;
		string getName();
		string getType();
		int getPosX();
		int getPosY();
		int getDam();
		int getCHP();
		int getMHP();
		unit& operator<<(unit& u);
};



#endif
