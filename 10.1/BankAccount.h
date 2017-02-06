#pragma once
#include <string>
#include <cctype>
#include <iostream>
class BankAccount
{
private:
	std::string m_name;
	char m_number[20];
	double m_balance;
public:
	void Create(const std::string & name, const char * number, double balance);
	void Show() const;
	void Add(double money);
	void Remove(double money);
};

