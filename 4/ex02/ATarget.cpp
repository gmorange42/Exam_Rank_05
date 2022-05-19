#include "ATarget.hpp"

ATarget::ATarget(void) {}

ATarget::ATarget(ATarget const & rhs)
{
	*this = rhs;
}

ATarget&	ATarget::operator=(ATarget const & rhs)
{
	this->type = rhs.type;
	return (*this);
}

ATarget::ATarget(std::string new_type) : type(new_type) {}

ATarget::~ATarget(void) {}

std::string const	ATarget::getType(void) const
{
	return (this->type);
}

void	ATarget::getHitBySpell(ASpell const & spell)
{
	std::cout << this->getType() << " has been " << spell.getEffects() << "!" << std::endl;
}
