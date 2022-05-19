#ifndef DUMMY_HPP
#define DUMMY_HPP

#include <iostream>
#include "ASpell.hpp"

class Dummy : public ATarget
{
	public:
		Dummy(void);
		virtual ~Dummy(void);
		virtual	Dummy*		clone(void) const;
};

#endif
