#include "Fireball.hpp"

Fireball::Fireball(void) : ASpell("Fireball", "burnt to a crisp") {}

Fireball*	Fireball::clone(void) const
{
	Fireball* ret = new Fireball;
	return (ret);
}

Fireball::~Fireball(void) {}
