#include "cow.h"
int main(int argc, char const *argv[])
{
	Cow foo;
	Cow bar ("Józefina", "malarstwo", 70.4);
	foo.ShowCow();
	bar.ShowCow();
	foo = bar;
	foo.ShowCow();
	Cow lel (foo);
	lel.ShowCow();
	return 0;
}