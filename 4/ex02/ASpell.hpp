#ifndef ASPELL_HPP
#define ASPELL_HPP

#include "ATarget.hpp"
#include <iostream>

class	ATarget;

class ASpell
{
	public:
		ASpell(void);
		ASpell(ASpell const & rhs);
		ASpell&	operator=(ASpell const & rhs);
		ASpell(std::string new_name, std::string new_effects);
		virtual ~ASpell(void);
		std::string const	getName(void) const;
		std::string const	getEffects(void) const;
		virtual	ASpell*		clone(void) const = 0;
		void			launch(ATarget & target);
	protected:
		std::string	name;
		std::string	effects;
};

#endif
