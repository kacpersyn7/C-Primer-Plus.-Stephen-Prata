#include <iostream>
#include "list.h"
void show(Item & item);
int main(int argc, char const *argv[])
{
	
	Item a = 10, b = 1;
	List sample(b);
	sample.push(a);
	
	sample.push(a);
	sample.push(a);
	sample.visit(show);
	return 0;
}
void show(Item & item)
{
	using std::cout;
	cout<<"item to "<<item<<"\n";
}