#include "ATarget.hpp"

ATarget::ATarget(void) {}

ATarget::ATarget(std::string const type) : type(type) {}

ATarget::ATarget(ATarget const & rhs) {*this = rhs;}

ATarget&	ATarget::operator=(ATarget const & rhs){
	this->type = rhs.type;
	return (*this);
}

ATarget::~ATarget(void) {}

std::string const &	ATarget::getType(void) const {return (this->type);}

void			ATarget::getHitBySpell(ASpell const & spell) const{
	std::cout << getType() << " has been " << spell.getEffects() << "!" << std::endl;
}
