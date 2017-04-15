// functor.cpp -- u¿ywanie funktorów
#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>

template<class T> // klasa funktora definiuje operator()()
class TooBig
{
private:
	T cutoff;
public:
	TooBig(const T & t) : cutoff(t) {}
	bool operator()(const T & v) { return v > cutoff; }
};

//void outint(int n) { std::cout << n << " "; }

int main()
{
	using std::list;
	using std::cout;
	using std::endl;
	auto outint = [](int n) { std::cout << n << " "; };
	list<int> yadayada = {50, 100, 90, 180, 60, 210, 415, 88, 188, 201};
	list<int> etcetera {50, 100, 90, 180, 60, 210, 415, 88, 188, 201};
	cout << "Oryginalne listy:\n";
	for_each(yadayada.begin(), yadayada.end(), outint);
	cout << endl;
	for_each(etcetera.begin(), etcetera.end(), outint);
	cout << endl;
	yadayada.remove_if([](const int & v) { return v > 100; });             // u¿ywa nazwanego obiektu funkcyjnego
	etcetera.remove_if([](const int & v) { return v > 200; }); // tworzy obiekt funkcyjny
	cout << "Przyciete listy:\n";
	for_each(yadayada.begin(), yadayada.end(), outint);
	cout << endl;
	for_each(etcetera.begin(), etcetera.end(), outint);
	cout << endl;
	std::cin.get();

	return 0;
}

