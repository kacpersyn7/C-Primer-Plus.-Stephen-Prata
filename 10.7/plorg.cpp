#include <iostream>
#include "plorg.h"
#include <cstring>
Plorg::Plorg()
{
	strcpy(m_name,"Plorga");
	m_ratio = 50;
}
Plorg::Plorg(const char * name, int ratio)
{
	strcpy(m_name,name);
	m_ratio = ratio;
}
void Plorg::changeRatio(int ratio)
{
	m_ratio = ratio;
}
void Plorg::showPlorg() const
{
	using std::cout;
	cout<<"Imie "<<m_name<<" współczynnik "<<m_ratio<<"\n";
}