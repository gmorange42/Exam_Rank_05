#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <iostream>
#include "ATarget.hpp"

class	ATarget;

class	ASpell
{
	public:
		ASpell(void);
		ASpell(ASpell const & rhs);
		ASpell&	operator=(ASpell const & rhs);
		ASpell(std::string new_name, std::string new_effects);
		virtual ~ASpell();
		std::string const &	getName() const;
		std::string const &	getEffects() const;
		virtual ASpell*		clone(void) const = 0;
		void			launch(ATarget const & target) const;
	private:
		std::string	name;
		std::string	effects;
};

#endif
