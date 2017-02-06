#pragma once
#include <iostream>
class complex0
{
private:
	double m_re;
	double m_im;
public:
	complex0(double re = 0, double im = 0);
	~complex0();
	complex0 operator+(const complex0 & imaginary) const;
	complex0 operator-(const complex0 & imaginary) const;
	complex0 operator*(const complex0 & imaginary) const;
	friend complex0 operator*(double mn,const complex0 & imaginary);
	friend complex0 operator~(const complex0 & imaginary);
	friend std::ostream & operator<<(std::ostream & os,const complex0 & imaginary);
	friend std::istream & operator>>(std::istream & os, complex0 & imaginary);
};

