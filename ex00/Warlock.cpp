#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title) : _name(name), _title(title){
	std::cout << this->getName() << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock(void) {std::cout << this->getName() << ": My job here is done," << std::endl;}

std::string	Warlock::getName(void) const {return (this->_name);}

std::string	Warlock::getTitle(void) const {return (this->_title);}

void		Warlock::setTitle(std::string const & title) {this->_title = title;}

void		Warlock::introduce(void) const {std::cout << this->getName() << ": I am " << this->getName() << ", " << this->getTitle() << "!" << std::endl;}