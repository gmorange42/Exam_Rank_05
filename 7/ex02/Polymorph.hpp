#ifndef POLYMORPH_HPP
#define POLYMORPH_HPP

#include <iostream>
#include "ATarget.hpp"
#include "ASpell.hpp"

class	ATarget;

class	Polymorph : public ASpell
{
	public:
		Polymorph(void);
		virtual ~Polymorph(void);
		virtual Polymorph*		clone(void) const;
};

#endif
