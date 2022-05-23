#include "ATarget.hpp"

ATarget::ATarget(void) {}

ATarget::ATarget(ATarget const & rhs)
{
	*this = rhs;
}

ATarget&	ATarget::operator=(ATarget const & rhs)
{
	this->_type = rhs._type;
	return (*this);
}

ATarget::ATarget(std::string type) : _type(type) {}

ATarget::~ATarget(void) {}

std::string const &	ATarget::getType(void) const
{
	return (this->_type);
}

void		ATarget::getHitBySpell(ASpell const & spell) const
{
	std::cout << this->getType() << " has been " << spell.getEffects() << "!" << std::endl; 
}
