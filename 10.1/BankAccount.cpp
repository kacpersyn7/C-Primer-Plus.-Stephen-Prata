#include "BankAccount.h"


void BankAccount::Create(const std::string & name, const char * number, double balance = 0.0)
{
	m_name = name;
	strcpy_s(m_number, number);
	if (balance < 0)
	{
		std::cout << "nie mozna mniej niz 0\n";
		m_balance = 0.0;
	}
	else
		m_balance = balance;
}

void BankAccount::Show() const
{
	using std::cout;
	cout << "Pan " << m_name << " o numerze konta " << m_number << " ma " << m_balance << " na koncie\n";
}

void BankAccount::Add(double money)
{
	m_balance += money;
}

void BankAccount::Remove(double money)
{
	if (m_balance < money)
	{
		std::cout << "Nie mozesz sprzedac wiecej niz masz, sprzedaje " << money - m_balance << "I ustawiam na 0\n";
		m_balance = 0.0;
	}
	else
		m_balance -= money;
}

