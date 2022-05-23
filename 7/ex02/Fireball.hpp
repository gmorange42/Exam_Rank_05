#ifndef FIREBALL_HPP
#define FIREBALL_HPP

#include <iostream>
#include "ATarget.hpp"
#include "ASpell.hpp"

class	ATarget;

class	Fireball : public ASpell
{
	public:
		Fireball(void);
		virtual ~Fireball(void);
		virtual Fireball*		clone(void) const;
};

#endif
