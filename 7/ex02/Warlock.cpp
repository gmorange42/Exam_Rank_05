#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title) : _name(name), _title(title)
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

void                    Warlock::introduce(void) const
{
	std::cout << this->getName() << ": I am " << this->getName() << ", " << this->getTitle() << "!" << std::endl;
}

void			Warlock::learnSpell(ASpell* new_spell)
{
	if (new_spell)
		this->spell_book.learnSpell(new_spell);
}

void			Warlock::forgetSpell(std::string spell_name)
{
	this->spell_book.forgetSpell(spell_name);
}

void			Warlock::launchSpell(std::string spell_name, ATarget const & target)
{
	ATarget const * test = 0;
	if (test == &target)
		return ;
	ASpell * temp = this->spell_book.createSpell(spell_name);
	if (temp)
		temp->launch(target);
}
