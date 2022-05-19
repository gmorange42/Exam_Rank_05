#ifndef DUMMY_HPP
#define DUMMY_HPP

#include "Warlock.hpp"
#include "ASpell.hpp"

class	ASpell;

class Dummy : public ATarget
{
	public:
		Dummy(void);
		virtual ~Dummy(void);
		virtual	Dummy*		clone(void) const;
};

#endif
