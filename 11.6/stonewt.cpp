// stonewt.cpp -- implementacje metod klasy Stonewt
#include <iostream>
using std::cout;
using std::cin;
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
}
Stonewt::~Stonewt() // destruktor
{
}
void Stonewt::change(double lbs)
{
    stone = int (lbs) / Lbs_per_stn; // dzielenie całkowite
    pds_left = int (lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
    mode = POU;
}
std::ostream & operator<<(std::ostream & os, const Stonewt & thing)
{
	if(Stonewt::STON == thing.mode)
		os << thing.stone << " kamieni, " << thing.pds_left << " funtów\n";
	else
		os << thing.pounds << " funtów\n";
	return os;
}
std::istream & operator>>(std::istream & os, Stonewt & s)
{
	double lbs;
	cout<<"Podaj mase w funtach: ";
	os >> lbs;
	cout<<"\n";
	s.change(lbs);
	return os;

}