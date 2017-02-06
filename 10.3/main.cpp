#include <iostream>
#include "golf.h"
const int SIZE = 3;
int main()
{
	int error = 1;
	int n;
	Golf players [SIZE];
	for(n = 0; n < SIZE && error; ++n)
		error = (players[n]).setgolf();
	for(int i = 0; i < n-1+error; ++i)
		(players[i]).showgolf();
}