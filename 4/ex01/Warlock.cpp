#include "Warlock.hpp"

Warlock::Warlock(std::string new_name, std::string new_title) : name(new_name), title(new_title)
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
	this->spells.insert(spell);
}

void            Warlock::forgetSpell(std::string spell_name)
{
	std::set<ASpell*>::iterator it = this->spells.begin();
	std::set<ASpell*>::iterator ite = this->spells.end();

	while (it != ite)
	{
		if ((*it)->getName() == spell_name)
		{
			this->spells.erase(*it);
			break;
		}
		++it;
	}
}

void            Warlock::launchSpell(std::string spell_name, ATarget & target)
{
	std::set<ASpell*>::iterator it = this->spells.begin();
	std::set<ASpell*>::iterator ite = this->spells.end();

	while (it != ite)
	{
		if ((*it)->getName() == spell_name)
		{
			(*it)->launch(target);
			break;
		}
		++it;
	}
}

