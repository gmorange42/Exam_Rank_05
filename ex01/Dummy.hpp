#ifndef DUMMY_HPP

#include <iostream>
#include "ATarget.hpp"

class	Dummy : public ATarget
{
	public:
		Dummy(void);
		virtual ~Dummy(void);
		virtual Dummy&	clone(void);
	protected:
		std::string	_type;
};

#endif
