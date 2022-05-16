#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include <set>
#include "ASpell.hpp"

class	ASpell;

class	Warlock
{
	public:
		Warlock(std::string const name, std::string const title);
		~Warlock(void);
		std::string const	getName(void) const;
		std::string const	getTitle(void) const;
		void			setTitle(std::string const & title);
		void			introduce(void) const;
		void			learnSpell(ASpell * spell);
		void			forgetSpell(std::string spell);
		void			launchSpell(std::string spell_name, ATarget & target);
	private:
		Warlock(void);
		Warlock(Warlock const & rhs);
		Warlock&		operator=(Warlock const & rhs);
		std::string	name;
		std::string	title;
		std::set<ASpell*>	spells;
};

#endif
