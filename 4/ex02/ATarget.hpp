#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"

class	ASpell;

class ATarget
{
	public:
		ATarget(void);
		ATarget(ATarget const & rhs);
		ATarget&	operator=(ATarget const & rhs);
		ATarget(std::string new_type);
		virtual ~ATarget(void);
		std::string const	getType(void) const;
		void			getHitBySpell(ASpell const & spell);
		virtual	ATarget*		clone(void) const = 0;
	protected:
		std::string	type;
};

#endif
