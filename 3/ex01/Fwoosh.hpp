#ifndef FWOOSH_HPP
#define FWOOSH_HPP

#include <iostream>
#include "ASpell.hpp"

class Fwoosh : public ASpell
{
	public:
		Fwoosh(void);
		virtual	~Fwoosh(void);
		Fwoosh*		clone(void) const;
	private:
		std::string	name;
		std::string	effects;
};

#endif
