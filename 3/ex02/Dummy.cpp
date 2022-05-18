#include "Dummy.hpp"

Dummy::Dummy(void) : ATarget("Target Practice Dummy") {}

Dummy::~Dummy(void) {}

Dummy*	Dummy::clone(void)
{
	Dummy* ret = new Dummy;
	return (ret);
}
