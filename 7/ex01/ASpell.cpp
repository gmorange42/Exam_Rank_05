#include "ASpell.hpp"

ASpell::ASpell(void) {}

ASpell::ASpell(ASpell const & rhs)
{
	*this = rhs;
}

ASpell&	ASpell::operator=(ASpell const & rhs)
{
	this->_name = rhs._name;
	this->_effects= rhs._effects;
	return (*this);
}

ASpell::ASpell(std::string name, std::string effects) : _name(name), _effects(effects) {}

ASpell::~ASpell(void) {}

std::string	ASpell::getName(void) const
{
	return (this->_name);
}

std::string	ASpell::getEffects(void) const
{
	return (this->_effects);
}

void		ASpell::launch(ATarget const & target) const
{
	target.getHitBySpell(*this);
}
