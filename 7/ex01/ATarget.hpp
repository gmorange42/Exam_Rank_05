#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <iostream>
#include "ASpell.hpp"

class	ASpell;

class	ATarget
{
	public:
		ATarget(void);
		ATarget(ATarget const & rhs);
		ATarget&	operator=(ATarget const & rhs);
		ATarget(std::string type);
		virtual ~ATarget(void);
		std::string const &	getType(void) const;
		virtual	ATarget*		clone(void) const = 0;
		void			getHitBySpell(ASpell const & spell) const;
	protected:
		std::string	_type;
};

#endif
