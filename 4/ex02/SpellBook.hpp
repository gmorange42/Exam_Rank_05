#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include <iostream>
#include <set>
#include "ASpell.hpp"

class SpellBook
{
	public:
		SpellBook(void);
		~SpellBook(void);
		void		learnSpell(ASpell * spell);
		void		forgetSpell(std::string spell_name);
		ASpell*		createSpell(std::string	spell_name);
	private:
		SpellBook(SpellBook const & rhs);
		SpellBook&	operator=(SpellBook const & rhs);
		std::set<ASpell*>	spells;
};

#endif
