#include <iostream>
#include "fun.h"
int main(int argc, char const *argv[])
{
	using SALES::Sales;
	Sales pd1;
	double t[5] = {1.1,2.2,3.3,4.4,5.5};
	Sales pd2(t,5);
	pd1.setSales();
	pd1.showSales();
	pd2.showSales();
	return 0;
}