#include <iostream>
#include <string>
#include <cstring>
#include "person.h"
Person::Person(const std::string & ln, const char * fn)
{
	lname = ln;
	strcpy(fname,fn);
}
void Person::Show() const
{
	using std::cout;
	using std::endl;
	cout<<lname<<" "<<fname<<endl;
}
void Person::FormalShow() const
{
	using std::cout;
	using std::endl;
	cout<<fname<<" "<<lname<<endl;
}