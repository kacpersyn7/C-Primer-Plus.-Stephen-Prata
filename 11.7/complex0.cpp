#include "complex0.h"



complex0::complex0(double re, double im)
{
	m_re = re;
	m_im = im;
}



complex0::~complex0()
{
}
complex0 complex0::operator+(const complex0 & imaginary) const
{
	return complex0(m_re + imaginary.m_re, m_im + imaginary.m_im);
}
complex0 complex0::operator-(const complex0 & imaginary) const
{
	return complex0(m_re - imaginary.m_re, m_im - imaginary.m_im);
}
complex0 complex0::operator*(const complex0 & imaginary) const
{
	return complex0(m_re * imaginary.m_re - m_im * imaginary.m_im, m_re * imaginary.m_im + m_im * imaginary.m_re);
}

complex0 operator*(double mn,const complex0 & imaginary) 
{
	return complex0(mn*imaginary.m_re, mn*imaginary.m_im);
}

complex0 operator~(const complex0 & imaginary) 
{
	return complex0(imaginary.m_re, -imaginary.m_im);
}
std::ostream & operator<<(std::ostream & os,const complex0 & imaginary)
{
	os << "(" << imaginary.m_re << ", " << imaginary.m_im << "i)\n";
	return os;
}
std::istream & operator>>(std::istream & os,  complex0 & imaginary)
{
	std::cout << "sk³adowa rzeczywista: ";
	std::cin >> imaginary.m_re;
	std::cout << "sk³adowa urojona ";
	std::cin >> imaginary.m_im;
	return os;
}
