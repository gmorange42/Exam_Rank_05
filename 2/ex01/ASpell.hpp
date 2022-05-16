#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <iostream>
#include "ATarget.hpp"

class	ATarget;

class	ASpell
{
	public:
		ASpell(void);
		ASpell(std::string const name, std::string const title);
		ASpell(ASpell const & rhs);
		ASpell&		operator=(ASpell const & rhs);
		virtual ~ASpell(void);
		std::string const	getName(void) const;
		std::string const	getEffects(void) const;
		virtual ASpell*		clone(void) = 0;
		void			launch(ATarget const & target) const;
	protected:
		std::string	name;
		std::string	effects;
};

#endif
