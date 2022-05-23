#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include <set>
#include "ASpell.hpp"
#include "ATarget.hpp"

class	Warlock
{
	public:
		Warlock(std::string name, std::string title);
		~Warlock(void);
		std::string const &	getName(void) const;
		std::string const &	getTitle(void) const;
		void			setTitle(std::string const & new_title);
		void			introduce(void) const;
		void			learnSpell(ASpell* new_spell);
		void			forgetSpell(std::string spell_name);
		void			launchSpell(std::string spell_name, ATarget const & target);
	private:
		Warlock(void);
		Warlock(Warlock const & rhs);
		Warlock&	operator=(Warlock const & rhs);
		std::string	_name;
		std::string	_title;
		std::set<ASpell*>	spells;
};

#endif
