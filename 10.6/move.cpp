#include <iostream>
#include "move.h"
Move::Move(double a, double b)
{
	x = a;
	y = b;
}
void Move::showmove() const
{
	using std::cout;
	using std::endl;
	cout<<"wsp x "<<x<<" wsp y "<<y<<endl;
}
Move Move::add(const Move & m) const
{
	return Move(x + m.x, y + m.y);
}
void Move::reset (double a, double b)
{
	x = a;
	y = b;
}