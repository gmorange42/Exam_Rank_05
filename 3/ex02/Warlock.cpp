#include "Warlock.hpp"

Warlock::Warlock(std::string const new_name, std::string const new_title) : name(new_name), title(new_title)
{
	std::cout << this->getName() << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock(void)
{
	std::cout << this->getName() << ": My job here is done!" << std::endl;
}

std::string	Warlock::getName(void) const
{
	return (this->name);
}

std::string	Warlock::getTitle(void) const
{
	return (this->title);
}

void		Warlock::setTitle(std::string const & new_title)
{
	this->title = new_title;
}

void		Warlock::introduce(void) const
{
	std::cout << this->getName() << ": I am " << this->getName() << ", " << this->getTitle() << "!" << std::endl;
}

void            Warlock::learnSpell(ASpell * spell)
{
	this->spellbook.learnSpell(spell);
}

void            Warlock::forgetSpell(std::string const spell_name)
{
	this->spellbook.forgetSpell(spell_name);
}

void            Warlock::launchSpell(std::string spell_name, ATarget const & target)
{
	ASpell *temp = spellbook.createSpell(spell_name);
	
	if (temp)
		temp->launch(target);
}
