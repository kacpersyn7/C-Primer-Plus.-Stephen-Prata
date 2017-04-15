#include <iostream>
#include "Cpmv.h"
int main()
{
	Cpmv move;
	Cpmv lol ("tak ", "nie ");
	Cpmv fol(lol);
	move = lol + fol;

	fol.Display();
	move.Display();
	
	std::cin.get();
	return 0;
}