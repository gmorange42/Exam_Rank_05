#include "SpellBook.hpp"

SpellBook::SpellBook(void) {}

SpellBook::~SpellBook(void)
{
	std::set<ASpell*>::iterator it = this->spells.begin();
	std::set<ASpell*>::iterator ite = this->spells.end();

	while (it != ite)
	{
		delete (*it);
		++it;
	}
}

void		SpellBook::learnSpell(ASpell * new_spell)
{
	this->spells.insert(new_spell->clone());
}

void		SpellBook::forgetSpell(std::string spell_name)
{
	std::set<ASpell*>::iterator it = this->spells.begin();
	std::set<ASpell*>::iterator ite = this->spells.end();

	while (it != ite)
	{
		if ((*it)->getName() == spell_name)
		{
			this->spells.erase((*it));
			break;
		}
		++it;
	}
}

ASpell*		SpellBook::createSpell(std::string spell_name)
{
	std::set<ASpell*>::iterator it = this->spells.begin();
	std::set<ASpell*>::iterator ite = this->spells.end();

	while (it != ite)
	{
		if ((*it)->getName() == spell_name)
			return ((*it));
		++it;
	}
	return (NULL);
}

