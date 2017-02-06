#include <iostream>
#include "golf.h"
int main()
{
	int error = 1;
	int n;
	golf players [SIZE];
	for(n = 0; n < SIZE && error; ++n)
		error = setgolf(players[n]);
	for(int i = 0; i < n-1+error; ++i)
		showgolf(players[i]);
}