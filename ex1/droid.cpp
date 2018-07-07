#include <iostream>
#include  "unit.h"
using namespace std;


unit::unit(string name="", string type="",int posX=0, int posY=0,int dam=0,	int cHP=0,int mHP=0)
{
	this->name = name;
	this->type = type;
	this->posX = posX;
	this->posY = posY;
	this->dam = dam;
	if(cHP<0){
		cHP=0;
	}
	this->mHP = mHP;
	if(cHP>this->mHP){
		cHP=this->mHP;
	}
	this->cHP = cHP;
	
	
}

unit::unit(unit &u)
{
	this->name = u.name;
	this->type = u.type;
	this->posX = u.posX;
	this->posY = u.posY;
	this->dam = u.dam;
	this->cHP = u.cHP;
	this->mHP = u.mHP;
}


unit::~unit()
{
	cout<<"destructor"<<endl;
}


unit& unit::operator=(unit& u)
{
	this->name = u.name;
	this->type = u.type;
	this->posX = u.posX;
	this->posY = u.posY;
	this->dam = u.dam;
	this->cHP = u.cHP;
	this->mHP = u.mHP;
	return *this;
}

string unit::getName()
{
	return this->name;
}

string unit::getType()
{
	return this->type;
}

int unit::getPosX()
{
	return this->posX;
}

int unit::getPosY()
{
	return this->posY;
}

int unit::getDam()
{
	return this->dam;
}

int unit::getCHP()
{
	return this->cHP;
}

int unit::getMHP()
{
	return this->mHP;
}

unit& unit::operator<<(unit& u)
{
	cout<<u.getName()<<" is a "<<u.getType()<<" in "<<u.getPosX()<<'/'<<u.getPosY()<<" with "<<u.getCHP()<<"/"<<u.getMHP()<<"HP damaging at "<<u.getDam()<<"$"<<endl; 
	return *this;
}


