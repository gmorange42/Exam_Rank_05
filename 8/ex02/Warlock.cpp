#include "Warlock.hpp"

Warlock::Warlock(std::string new_name, std::string new_title) : _name(new_name), _title(new_title)
{
	std::cout << this->getName() << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock(void)
{
	std::cout << this->getName() << ": My job here is done!" << std::endl;
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
		this->_spell_book.learnSpell(spell);
}

void			Warlock::forgetSpell(std::string const & spell_name)
{
	this->_spell_book.forgetSpell(spell_name);
}

void			Warlock::launchSpell(std::string const & spell_name, ATarget const & target)
{
	ATarget const * test = 0;

	if (test == &target)
		return ;
	ASpell * temp = 0; 
	
	temp = this->_spell_book.createSpell(spell_name);
	if (temp)
		temp->launch(target);
}
