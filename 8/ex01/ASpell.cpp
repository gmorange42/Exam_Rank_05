#include "ASpell.hpp"

ASpell::ASpell(void) {}

ASpell::ASpell(ASpell const & rhs)
{
	*this = rhs;
}

ASpell&	ASpell::operator=(ASpell const & rhs)
{
	this->_name = rhs._name;
	this->_effects = rhs._effects;
	return (*this);
}

ASpell::ASpell(std::string new_name, std::string new_effects) : _name(new_name), _effects(new_effects)
{
}

ASpell::~ASpell(void)
{
}

std::string const &	ASpell::getName(void) const
{
	return (this->_name);
}

std::string const &	ASpell::getEffects(void) const
{
	return (this->_effects);
}

void			ASpell::launch(ATarget const & target)
{
	ATarget const * test = 0;
	if (test == & target)
		return ;
	target.getHitBySpell(*this);
}
