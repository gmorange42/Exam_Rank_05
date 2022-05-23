#ifndef BRICKWALL_HPP
#define BRICKWALL_HPP

#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"

class	BrickWall : public ATarget
{
	public:
		BrickWall(void);
		virtual ~BrickWall(void);
		virtual	BrickWall*		clone(void) const;
};

#endif
