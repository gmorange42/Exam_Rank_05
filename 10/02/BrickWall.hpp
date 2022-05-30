#ifndef BRICKWALL_HPP
#define BRICKWALL_HPP

#include <iostream>
#include "ATarget.hpp"

class	BrickWall : public ATarget
{
	public:
		BrickWall(void);
		virtual ~BrickWall();
		virtual BrickWall*	clone(void) const;
};

#endif
