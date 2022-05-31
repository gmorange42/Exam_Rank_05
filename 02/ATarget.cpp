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

ATarget::ATarget(std::string new_type) : type(new_type)
{
}

ATarget::~ATarget()
{
}

std::string const &	ATarget::getType() const
{
	return (this->type);
}

void			ATarget::getHitBySpell(ASpell const & spell) const
{
	ASpell * const test = 0;

	if (test != &spell)
		std::cout << this->getType() << " has been " << spell.getEffects() << "!" << std::endl;
}
