#include <iostream>
#include "golf.h"
#include <cstring>
Golf::Golf(const char * fullname, int handicap)
{
	strcpy(m_fullname, fullname);
	m_handicap = handicap;
}
int Golf::setgolf()
{
	char fullname [Len];
	int handicap;
	using std::cout;
	using std::cin;
	cout<<"Podaj nazwisko\n";
	cin.get(fullname,Len);
	if(!cin)
	{
		*this = Golf(fullname);
		return 0;
	}
	cin.get();
	cout<<"Podaj wartosc\n";
	(cin>>handicap).get();
	*this = Golf(fullname, handicap);
	return 1;
}
void Golf::handicap(int hc)
{
	m_handicap = hc;
}
void Golf::showgolf()
{
	std::cout<<"gracz "<<m_fullname<<" ma handicap "<<m_handicap<<std::endl;
}