#include <iostream>
double harmony(double x, double y);
int main()
{
	double x,y;
	do
	{
		std::cout<<"Podaj dwie liczby(0 konczy)\n";
		std::cin>>x>>y;
		std::cout<<harmony(x,y)<<std::endl;
	} while(x != 0.0 && y != 0.0);
	return 0;
}
double harmony(double x, double y)
{
	return (2.0*x*y)/(x+y);
}