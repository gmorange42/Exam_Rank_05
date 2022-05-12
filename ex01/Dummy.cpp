#include "Dummy.hpp"

Dummy::Dummy(void) {
	this->_type = "Target Practice Dummy";
}

Dummy::~Dummy(void) {}

Dummy&	Dummy::clone(void) {return (*this);}
