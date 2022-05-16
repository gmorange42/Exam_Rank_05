#include "Fwoosh.hpp"

Fwoosh::Fwoosh(void) : name("Fwoosh"), effects("Fwooched") {}

Fwoosh*			Fwoosh::clone(void)
{
	Fwoosh* ret = new Fwoosh;
	return (ret);
}
