#include "Warlock.hpp"

Warlock::Warlock(std::string new_name, std::string new_title) : _name(new_name), _title(new_title)
{
	std::cout << this->getName() << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock(void)
{
	std::cout << this->getName() << ": My job here is done!" << std::endl;

	std::set<ASpell*>::iterator it = this->_spells.begin();
	std::set<ASpell*>::iterator ite = this->_spells.end();

	while (it != ite)
	{
		delete *it;
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

void			Warlock::introduce(void) const
{
	std::cout << this->getName() << ": I am " << this->getName() << ", " << this->getTitle() << "!" << std::endl;
}

void			Warlock::learnSpell(ASpell * spell)
{
	if (spell)
		this->_spells.insert(spell->clone());
}

void			Warlock::forgetSpell(std::string const & spell_name)
{
	std::set<ASpell*>::iterator it = this->_spells.begin();
	std::set<ASpell*>::iterator ite = this->_spells.end();

	while (it != ite)
	{
		if ((*it)->getName() == spell_name)
		{
			delete *it;
			this->_spells.erase(*it);
			break;
		}
		++it;
	}
}

void			Warlock::launchSpell(std::string const & spell_name, ATarget const & target)
{
	ATarget const * test = 0;

	if (test == &target)
		return ;
	std::set<ASpell*>::iterator it = this->_spells.begin();
	std::set<ASpell*>::iterator ite = this->_spells.end();

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
