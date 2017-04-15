#include "Cpmv.h"

Cpmv::Cpmv()
{
	pi = nullptr; 
	//pi->qcode = std::string();
	//pi->zcode = std::string();
	std::cout << "Konstruktor domyslny\n";
}

Cpmv::Cpmv(std::string q, std::string z)
{
	pi = new Info;
	pi->qcode = q;
	pi->zcode = z;
	std::cout << "Konstruktor dla dwoch arg\n";
}

Cpmv::Cpmv(const Cpmv & cp)
{
	pi = new Info;
	pi->qcode = cp.pi->qcode;
	pi->zcode = cp.pi->zcode;
	std::cout << "Konstruktor kopiujacy\n";
}

Cpmv::Cpmv(Cpmv && mv)
{
	pi = mv.pi;
	mv.pi = nullptr;
	std::cout << "Konstruktor przenoszacy\n";
}


Cpmv::~Cpmv()
{
	delete pi;
	std::cout << "Destruktor\n";
}

Cpmv & Cpmv::operator=(const Cpmv & cp)
{
	std::cout << "operator kopiujacy\n";
	if (this == &cp)
		return *this;
	delete pi;
	pi = new Info;
	pi->qcode = cp.pi->qcode;
	pi->zcode = cp.pi->zcode;
	return *this;
	// TODO: insert return statement here
}

Cpmv & Cpmv::operator=(Cpmv && mv)
{
	std::cout << "operator przenoszacy\n";
	if (this == &mv)
		return *this;
	delete pi;
	pi = mv.pi;
	mv.pi = nullptr;
	return *this;
	// TODO: insert return statement here
}

Cpmv Cpmv::operator+(const Cpmv & obj) const
{
	std::cout << "operator konkatenacji\n";
	return Cpmv(pi->qcode+obj.pi->qcode, pi->zcode + obj.pi->zcode);
}

void Cpmv::Display() const
{
	std::cout << "\nqcode " << pi->qcode << "\n";
	std::cout << "zcode " << pi->zcode << "\n\n";
}
