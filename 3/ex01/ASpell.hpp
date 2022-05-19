#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <iostream>
#include "ATarget.hpp"

class	ATarget;

class ASpell
{
	public:
		ASpell(void);
		ASpell(ASpell const & rhs);
		ASpell&	operator=(ASpell const & rhs);
		ASpell(std::string const new_name, std::string const new_title);
		virtual	~ASpell(void) = 0;
		std::string	getName(void) const;
		std::string	getEffects(void) const;
		virtual ASpell*		clone(void) const = 0;
		void		launch(ATarget const & target) const;
	private:
		std::string	name;
		std::string	effects;
};

#endif
