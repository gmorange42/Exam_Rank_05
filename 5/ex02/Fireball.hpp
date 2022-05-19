#ifndef FIREBALL_HPP
#define FIREBALL_HPP

#include <iostream>
#include "ASpell.hpp"

class Fireball : public ASpell
{
	public:
		Fireball(void);
		virtual ~Fireball(void);
		virtual Fireball*	clone(void) const;
};

#endif
