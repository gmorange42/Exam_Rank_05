#include "BrickWall.hpp"

BrickWall::BrickWall(void) : ATarget("Inconspicuous Red-brick Wall") {}

BrickWall*	BrickWall::clone(void) const
{
	BrickWall* ret = new BrickWall;
	return (ret);
}

BrickWall::~BrickWall(void) {}
