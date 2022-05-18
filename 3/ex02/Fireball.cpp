#include "Fireball.hpp"

Fireball::Fireball(void) : ASpell("Fireball", "burnt to a crisp") {}

Fireball::~Fireball(void) {}

Fireball*	Fireball::clone(void)
{
	Fireball* ret = new Fireball;
	return (ret);
}
