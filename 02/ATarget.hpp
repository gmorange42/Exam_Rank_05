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
		ATarget(std::string new_type);
		virtual ~ATarget();
		std::string const &	getType() const;
		virtual ATarget*	clone(void) const = 0;
		void			getHitBySpell(ASpell const & spell) const;
		
	private:
		std::string	type;
};

#endif
