#include "ASpell.hpp"

ASpell::ASpell(void) {}

ASpell::ASpell(ASpell const & rhs)
{
	*this = rhs;
}

ASpell&	ASpell::operator=(ASpell const & rhs)
{
	this->name = rhs.name;
	this->effects = rhs.effects;
	return (*this);
}

ASpell::ASpell(std::string new_name, std::string new_effects) : name(new_name), effects(new_effects)
{
}

ASpell::~ASpell()
{
}

std::string const &	ASpell::getName() const
{
	return (this->name);
}

std::string const &	ASpell::getEffects() const
{
	return (this->effects);
}

void			ASpell::launch(ATarget const & target) const
{
	ATarget const * test = 0;

	if (test != &target)
		target.getHitBySpell(*this);
}
