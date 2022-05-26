#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook(void)
{
	std::set<ASpell*>::const_iterator it = this->spells.begin();
	std::set<ASpell*>::const_iterator ite = this->spells.end();

	while (it != ite)
	{
		delete *it;
		++it;
	}
}

void			SpellBook::learnSpell(ASpell* spell)
{
	if (!spell)
		return ;

	std::set<ASpell*>::const_iterator it = this->spells.begin();
	std::set<ASpell*>::const_iterator ite = this->spells.end();

	while (it != ite)
	{
		if ((*it)->getName() == spell->getName())
			return ;
		++it;
	}
	this->spells.insert(spell->clone());
}

void			SpellBook::forgetSpell(std::string const & spell_name)
{

	std::set<ASpell*>::const_iterator it = this->spells.begin();
	std::set<ASpell*>::const_iterator ite = this->spells.end();

	while (it != ite)
	{
		if ((*it)->getName() == spell_name)
		{
			delete *it;
			this->spells.erase(*it);
			break;
		}
		++it;
	}
}

ASpell*			SpellBook::createSpell(std::string const & spell_name)
{

	std::set<ASpell*>::const_iterator it = this->spells.begin();
	std::set<ASpell*>::const_iterator ite = this->spells.end();

	while (it != ite)
	{
		if ((*it)->getName() == spell_name)
			return (*it);
		++it;
	}
	return (NULL);
}
