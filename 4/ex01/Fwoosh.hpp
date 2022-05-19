#ifndef FWOOSH_HPP
#define FWOOSH_HPP

#include "Warlock.hpp"
#include "ATarget.hpp"
class	ATarget;

class Fwoosh : public ASpell
{
	public:
		Fwoosh(void);
		virtual ~Fwoosh(void);
		virtual	Fwoosh*		clone(void) const;
};

#endif
