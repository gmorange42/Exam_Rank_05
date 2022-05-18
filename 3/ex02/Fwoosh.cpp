#include "Fwoosh.hpp"

Fwoosh::Fwoosh(void) : ASpell("Fwoosh", "fwooshed") {}

Fwoosh::~Fwoosh(void) {}

Fwoosh*	Fwoosh::clone(void)
{
	Fwoosh* ret = new Fwoosh;
	return (ret);
}
