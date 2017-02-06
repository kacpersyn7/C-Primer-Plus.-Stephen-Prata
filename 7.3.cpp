#include <iostream>
struct pudlo
{
	char producent[40];
	float wysokosc;
	float szerokosc;
	float dlugosc;
	float objetosc;
};
void show_elements (const pudlo data);
void change_pudlo (pudlo * data);
int main()
{
	using namespace std;
	pudlo cos = {"ktos", 4, 4, 4};
	show_elements(cos);
	change_pudlo(&cos);
	show_elements(cos);


	return 0;
}
void show_elements (const pudlo data)
{
	using namespace std;
	cout<<"producent:"<<data.producent<<endl;
	cout<<"wysokosc:"<<data.wysokosc<<endl;
	cout<<"szerokosc:"<<data.szerokosc<<endl;
	cout<<"dlugosc:"<<data.dlugosc<<endl;
	cout<<"objetosc:"<<data.objetosc<<endl;
}
void change_pudlo(pudlo * data)
{
	data->objetosc = data->wysokosc * data->szerokosc * data->dlugosc;
}
