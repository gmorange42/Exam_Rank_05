#include "Fwoosh.hpp"

Fwoosh::Fwoosh(void){
	this->_name = "Fwoosh";
	this->_effects = "Fwooshed";
}

Fwoosh::~Fwoosh(void) {}

Fwoosh&	Fwoosh::clone(void) {return (*this);}
