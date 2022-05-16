#include "ASpell.hpp"

ASpell::ASpell(void) {}

ASpell::ASpell(std::string const name, std::string const effects) : name(name), effects(effects) {}

ASpell::ASpell(ASpell const & rhs) {*this = rhs;}

ASpell&	ASpell::operator=(ASpell const & rhs){
	this->name = rhs.name;
	this->effects= rhs.effects;
	return (*this);
}

ASpell::~ASpell(void) {}

std::string const	ASpell::getName(void) const {return (this->name);}

std::string const	ASpell::getEffects(void) const {return (this->effects);}

void			ASpell::launch(ATarget const & target) const {
	target.getHitBySpell(*this);
}
