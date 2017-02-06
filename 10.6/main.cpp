#include <iostream>
#include "move.h"
int main(int argc, char const *argv[])
{
	using namespace std;
	double x,y;
	cout<<"Podaj x i y\n";
	cin>>x>>y;
	Move wsp1(x,y);
	cout<<"Podaj x i y\n";
	cin>>x>>y;
	Move wsp2(x,y);
	cout<<"wsp1\n";
	wsp1.showmove();
	cout<<"wsp2\n";
	wsp2.showmove();
	cout<<"suma\n";
	(wsp1.add(wsp2)).showmove();
	return 0;
}