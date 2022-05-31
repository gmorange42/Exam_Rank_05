#include "Fwoosh.hpp"

Fwoosh::Fwoosh(void) : ASpell("Fwoosh", "fwooshed") {}

Fwoosh::~Fwoosh()
{
}

Fwoosh*	Fwoosh::clone(void) const
{
	return (new Fwoosh(*this));
}
