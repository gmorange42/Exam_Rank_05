#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <iostream>
#include "ASpell.hpp"

class	ASpell;

class ATarget
{
	public:
		ATarget(void);
		ATarget(ATarget const & rhs);
		ATarget&	operator=(ATarget const & rhs);
		ATarget(std::string const new_type);
		virtual	~ATarget(void) = 0;
		std::string	getType(void) const;
		virtual ATarget*	clone(void) = 0;
		void		getHitBySpell(ASpell const & spell) const;
	private:
		std::string	type;
};

#endif
