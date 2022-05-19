#include "Dummy.hpp"

Dummy::Dummy(void) : ATarget("Target Practice Dummy") {}

Dummy*	Dummy::clone(void) const
{
	Dummy* ret = new Dummy;
	return (ret);
}

Dummy::~Dummy(void) {}
