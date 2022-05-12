#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <iostream>
#include "ASpell.hpp"

class	ASpell;

class	ATarget
{
	public:
		ATarget(void);
		ATarget(std::string type);
		ATarget(std::string name, std::string effects);
		ATarget(ATarget const & rhs);
		ATarget&	operator=(ATarget const & rhs);
		virtual ~ATarget(void);
		std::string const &	getType(void) const;
		void			getHitBySpell(ASpell const & spell) const;
		virtual ATarget&		clone(void) = 0;
	protected:
		std::string	_type;
};

#endif
