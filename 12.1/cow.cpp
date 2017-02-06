#include "cow.h"
#include <cstring>
#include <iostream>
Cow::Cow()
{
	name[0] = '\0';
	hobby = new char [1];
	hobby[0] = '\0';
	weight = 0.0;
}
Cow::Cow(const char * nm, const char * ho, double wt)
{
	std::strcpy(name,nm);
	hobby = new char [std::strlen(ho)+1];
	std::strcpy(hobby, ho);
	weight = wt;
}
Cow::Cow(const Cow &c)
{
	std::strcpy(name,c.name);
	hobby = new char [std::strlen(c.hobby)+1];
	std::strcpy(hobby, c.hobby);
	weight = c.weight;
}
Cow::~Cow()
{
	delete [] hobby;
}
Cow & Cow::operator=(const  Cow & c)
{
	if(this == &c)
		return *this;
	delete [] hobby;
	hobby = new char [strlen(c.hobby)+1];
	std::strcpy(hobby, c.hobby);
	std::strcpy(name, c.name);
	weight = c.weight;
	return *this;
}
void Cow::ShowCow() const 
{
	using std::cout;
	cout << "imie " << name << " hobby " << hobby << " waga " << weight <<"\n";
}
