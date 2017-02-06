// stonewt.cpp -- implementacje metod klasy Stonewt
#include <iostream>
using std::cout;
#include "stonewt.h"

// konstruuje obiekt Stonewt z wartości typu double
Stonewt::Stonewt(double lbs)
{
    stone = int (lbs) / Lbs_per_stn; // dzielenie całkowite
    pds_left = int (lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
    mode = POU;
}

// konstruuje obiekt Stonewt z liczby kamieni i funtów
Stonewt::Stonewt(int stn, double lbs)
{
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn +lbs;
    mode = STON;
}

Stonewt::Stonewt() // konstruktor domyślny, zeruje obiekt
{
    stone = pounds = pds_left = 0;
    mode = STON;
}
Stonewt::~Stonewt() // destruktor
{
}
Stonewt Stonewt::operator+(const Stonewt & thing) const
{
	Stonewt temp(pounds + thing.pounds);
	if(STON == mode && STON == thing.mode)
		temp.setston();
	return temp;
}
Stonewt Stonewt::operator-(const Stonewt & thing) const
{
	Stonewt temp(abs(pounds - thing.pounds));
	if(STON == mode && STON == thing.mode)
		temp.setston();
	return temp;
}
Stonewt Stonewt::operator*(const Stonewt & thing) const
{
	Stonewt temp(pounds * thing.pounds);
	if(STON == mode && STON == thing.mode)
		temp.setston();
	return temp;
}
std::ostream & operator<<(std::ostream & os, const Stonewt & thing)
{
	if(Stonewt::STON == thing.mode)
		os << thing.stone << " kamieni, " << thing.pds_left << " funtów\n";
	else
		os << thing.pounds << " funtów\n";
	return os;
}

// pokazuje masę w kamieniach

