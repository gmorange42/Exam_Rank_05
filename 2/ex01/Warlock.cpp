#include "Warlock.hpp"

Warlock::Warlock(std::string const name, std::string const title) : name(name), title(title) {
	std::cout << this->getName() << ": This looks like another boring day." << std::endl;
}

Warlock::Warlock(Warlock const & rhs) {*this = rhs;}

Warlock&	Warlock::operator=(Warlock const & rhs){
	this->name = rhs.name;
	this->title = rhs.title;
	return (*this);
}

Warlock::~Warlock(void) {
	std::cout << this->getName() << ": My job here is done!" << std::endl;
}

std::string const	Warlock::getName(void) const {return (this->name);}

std::string const	Warlock::getTitle(void) const {return (this->title);}

void			Warlock::setTitle(std::string const & title) {this->title = title;}

void			Warlock::introduce(void) const{
	std::cout << this->getName() << ": I am " << this->getName() << ", " << this->getTitle() << std::endl;
}

void			Warlock::learnSpell(ASpell * spell)
{
	this->spells.insert(spell);
}

void			Warlock::forgetSpell(std::string spell)
{
	std::set<ASpell*>::const_iterator it = this->spells.begin();
	std::set<ASpell*>::const_iterator ite = this->spells.end();

	for (; it != ite; it++)
	{
		if ((*it)->getName() == spell)
			this->spells.erase(it);
	}
}

void			Warlock::launchSpell(std::string spell_name, ATarget & target)
{
	std::set<ASpell*>::const_iterator it = this->spells.begin();
	std::set<ASpell*>::const_iterator ite = this->spells.end();

	for (; it != ite; it++)
	{
		if ((*it)->getName() == spell_name)
			(*it)->launch(target);
	}
}
