#ifndef FIREBALL_HPP
#define FIREBALL_HPP

#include <iostream>
#include "ASpell.hpp"

class Fireball : public ASpell
{
	public:
		Fireball(void);
		virtual	~Fireball(void);
		Fireball*		clone(void);
	private:
		std::string	name;
		std::string	effects;
};

#endif
