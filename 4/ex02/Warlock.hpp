#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include <set>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class Warlock
{
	public:
		Warlock(std::string new_name, std::string new_title);
		~Warlock(void);
		std::string	getName(void) const;
		std::string	getTitle(void) const;
		void		setTitle(std::string const & new_title);
		void		introduce(void) const;
		void		learnSpell(ASpell * spell);
		void		forgetSpell(std::string spell_name);
		void		launchSpell(std::string	spell_name, ATarget & target);
	private:
		Warlock(void);
		Warlock(Warlock const & rhs);
		Warlock&	operator=(Warlock const & rhs);
		std::string	name;
		std::string	title;
		SpellBook	spellBook;
};

#endif
