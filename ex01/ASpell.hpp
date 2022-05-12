#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <iostream>
#include "ATarget.hpp"

class	ATarget;

class	ASpell
{
	public:
		ASpell(void);
		ASpell(std::string name, std::string effects);
		ASpell(ASpell const & rhs);
		ASpell&	operator=(ASpell const & rhs);
		virtual ~ASpell(void);
		std::string const	getName(void) const;
		std::string const	getEffects(void) const;
		void		launch(ATarget const & target);
		virtual ASpell&		clone(void) = 0;
	protected:
		std::string	_name;
		std::string	_effects;
};

#endif
