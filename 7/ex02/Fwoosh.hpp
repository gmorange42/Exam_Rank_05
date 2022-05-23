#ifndef FWOOSH_HPP
#define FWOOSH_HPP

#include <iostream>
#include "ATarget.hpp"
#include "ASpell.hpp"

class	ATarget;

class	Fwoosh : public ASpell
{
	public:
		Fwoosh(void);
		virtual ~Fwoosh(void);
		virtual Fwoosh*		clone(void) const;
};

#endif
