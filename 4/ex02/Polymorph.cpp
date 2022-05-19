#include "Polymorph.hpp"

Polymorph::Polymorph(void) : ASpell("Polymorph", "turned into a critter") {}

Polymorph*	Polymorph::clone(void) const
{
	Polymorph* ret = new Polymorph;
	return (ret);
}

Polymorph::~Polymorph(void) {}
