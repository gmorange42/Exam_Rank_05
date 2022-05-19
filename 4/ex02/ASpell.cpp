#include "ASpell.hpp"

ASpell::ASpell(void) {}

ASpell::ASpell(ASpell const & rhs)
{
	*this = rhs;
}

ASpell&	ASpell::operator=(ASpell const & rhs)
{
	this->name = rhs.name;
	this->effects= rhs.effects;
	return (*this);
}

ASpell::ASpell(std::string new_name, std::string new_effects) : name(new_name), effects(new_effects) {}

ASpell::~ASpell(void) {}

std::string const	ASpell::getName(void) const
{
	return (this->name);
}

std::string const	ASpell::getEffects(void) const
{
	return (this->effects);
}

void	ASpell::launch(ATarget & target)
{
	target.getHitBySpell(*this);
}
