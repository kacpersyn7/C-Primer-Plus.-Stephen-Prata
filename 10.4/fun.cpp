#include <iostream>
#include "fun.h"
namespace SALES
{
	using std::cout;
	using std::endl;
	using std::cin;
	Sales::Sales()
	{
		m_min = 0;
		m_max = 0;
		m_average = 0;
		for(int i = 0; i < QUARTERS; ++i)
			m_sales[i] = 0;
	}
	Sales::Sales(const double ar[], int n)
	{
		int i;
		m_min = m_max = ar[0];
		for(i = 0; i < n &&  i < QUARTERS; ++i)
		{
			m_sales[i] = ar[i];
			if(ar[i] < m_min)
				m_min = ar[i];
			if(ar[i] > m_max)
				m_max = ar[i];
			m_average += ar[i];
		}
		//m_sales[0] = s.min;
		m_average /= i;
		for(i = n; i < QUARTERS; ++i)
			m_sales[i] = 0;
	}
	void Sales::setSales()
	{
		double sales[QUARTERS];
		double average, min, max;
		for(int i = 0; i < QUARTERS; ++i)
		{	
			cout<<"Podaj wartosc "<<i+1<<endl;
			cin>>sales[i];
		}
		*this = Sales(sales, QUARTERS);
	}
	void Sales::showSales() const
	{
		
		for (int i = 0; i < QUARTERS; ++i)
		{
			cout<<"sales "<<i+1<<" "<<m_sales[i]<<endl;
		}
		cout<<"srednia "<<m_average<<endl;
		cout<<"max "<<m_max<<endl;
		cout<<"min "<<m_min<<endl;
	}
}