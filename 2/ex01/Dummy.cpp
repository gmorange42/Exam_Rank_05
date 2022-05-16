#include "Dummy.hpp"

Dummy::Dummy(void) : type("Target Practice Dummy") {}


Dummy*			Dummy::clone(void)
{
	Dummy* ret = new Dummy;
	return (ret);
}
