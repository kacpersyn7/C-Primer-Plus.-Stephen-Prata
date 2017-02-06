#include <iostream>
#include "golf.h"
#include <cstring>
void setgolf(golf & g, const char * name, int hc)
{
	strcpy(g.fullname, name);
	g.handicap = hc;
}
int setgolf(golf & g)
{
	using std::cout;
	using std::cin;
	cout<<"Podaj nazwisko\n";
	cin.get(g.fullname,Len);
	if(!cin)
	{
		g.handicap = 0;
		return 0;
	}
	cin.get();
	cout<<"Podaj wartosc\n";
	(cin>>g.handicap).get();
	return 1;
}
void handicap(golf & g, int hc)
{
	g.handicap = hc;
}
void showgolf(const golf & g)
{
	std::cout<<"gracz "<<g.fullname<<"ma handicap "<<g.handicap<<std::endl;
}