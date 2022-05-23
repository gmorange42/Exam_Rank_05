#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << this->getName() << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock(void)
{
	std::cout << this->getName() << ": My job here is done!" << std::endl;

	std::set<ASpell*>::iterator it = this->spells.begin();
	std::set<ASpell*>::iterator ite = this->spells.end();

	while (it != ite)
	{
		delete (*it);
		this->spells.erase(*it);
		++it;
	}
}

std::string const &	Warlock::getName(void) const
{
	return (this->_name);
}

std::string const &	Warlock::getTitle(void) const
{
	return (this->_title);
}

void			Warlock::setTitle(std::string const & new_title)
{
	this->_title = new_title;
}

void                    Warlock::introduce(void) const
{
	std::cout << this->getName() << ": I am " << this->getName() << ", " << this->getTitle() << "!" << std::endl;
}

void			Warlock::learnSpell(ASpell* new_spell)
{
	if (new_spell)
		this->spells.insert(new_spell->clone());
}

void			Warlock::forgetSpell(std::string spell_name)
{
	std::set<ASpell*>::iterator it = this->spells.begin();
	std::set<ASpell*>::iterator ite = this->spells.end();

	while (it != ite)
	{
		if ((*it)->getName() == spell_name)
		{
			delete	(*it);
			this->spells.erase(*it);
			break;
		}
		++it;
	}
}

void			Warlock::launchSpell(std::string spell_name, ATarget const & target)
{
	std::set<ASpell*>::iterator it = this->spells.begin();
	std::set<ASpell*>::iterator ite = this->spells.end();

	while (it != ite)
	{
		if ((*it)->getName() == spell_name)
			(*it)->launch(target);
		++it;
	}
}
