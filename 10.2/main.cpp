#include <iostream>
#include "person.h"
main()
{
	Person one;
	Person two("Staszek");
	Person three("Jacek", "Placek");
	one.Show();
	one.FormalShow();
	two.Show();
	two.FormalShow();
	three.Show();
	three.FormalShow();
	return 0;
}