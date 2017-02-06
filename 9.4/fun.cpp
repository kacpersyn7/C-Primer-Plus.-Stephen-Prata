#include <iostream>
#include "fun.h"
namespace SALES
{
	using std::cout;
	using std::endl;
	using std::cin;
	void setSales(Sales & s, const double ar[], int n)
	{
		int i;
		s.min = s.max = ar[0];
		for(i = 0; i < n; ++i)
		{
			if(ar[i] < s.min)
				s.min = ar[i];
			if(ar[i] > s.max)
				s.max = ar[i];
			s.average += ar[i];
		}
		s.sales[0] = s.min;
		s.average /= i;
		for(i = 1; i < QUARTERS; ++i)
			s.sales[i] = 0;
	}
	void setSales(Sales & s)
	{
		for(int i = 0; i < QUARTERS; ++i)
		{	
			cout<<"Podaj wartosc "<<i+1<<endl;
			cin>>s.sales[i];
		}
		s.min = s.max = s.sales[0];
		for(int i = 0; i < QUARTERS; ++i)
		{
			if(s.sales[i] < s.min)
				s.min = s.sales[i];
			if(s.sales[i] > s.max)
				s.max = s.sales[i];
			s.average += s.sales[i];
		}
		s.average /= QUARTERS;
	}
	void showSales(const Sales & s)
	{
		
		for (int i = 0; i < QUARTERS; ++i)
		{
			cout<<"sales "<<i+1<<" "<<s.sales[i]<<endl;
		}
		cout<<"srednia "<<s.average<<endl;
		cout<<"max "<<s.max<<endl;
		cout<<"min "<<s.min<<endl;
	}
}