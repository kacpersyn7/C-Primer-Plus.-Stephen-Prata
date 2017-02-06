#include <iostream>
#include "plorg.h"
int main(int argc, char const *argv[])
{
	Plorg one;
	Plorg two("Plorgos");
	one.changeRatio(20);
	one.showPlorg();
	two.showPlorg();
	return 0;
}