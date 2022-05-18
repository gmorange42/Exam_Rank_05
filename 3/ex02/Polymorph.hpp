#ifndef POLYMORPH_HPP
#define POLYMORPH_HPP

#include <iostream>
#include "ASpell.hpp"

class Polymorph : public ASpell
{
	public:
		Polymorph(void);
		virtual	~Polymorph(void);
		Polymorph*		clone(void);
	private:
		std::string	name;
		std::string	effects;
};

#endif
