#include <iostream>
#include "fun.h"
int main(int argc, char const *argv[])
{
	using namespace SALES;
	Sales pd1,pd2;
	double t[5] = {1.1,2.2,3.3,4.4,5.5};
	setSales(pd1, t, 5);
	setSales(pd2);
	showSales(pd1);
	showSales(pd2);
	return 0;
}