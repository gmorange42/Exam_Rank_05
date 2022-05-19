#include "TargetGenerator.hpp"


TargetGenerator::TargetGenerator(void) {}

TargetGenerator::TargetGenerator(TargetGenerator const & rhs)
{
	*this = rhs;
}

TargetGenerator&	TargetGenerator::operator=(TargetGenerator const & rhs)
{
	this->targets = rhs.targets;
	return (*this);
}

TargetGenerator::~TargetGenerator(void) {}

void	TargetGenerator::learnTargetType(ATarget* target)
{
	this->targets.insert(target);
}

void	TargetGenerator::forgetTargetType(std::string const & target_name)
{
	std::set<ATarget*>::iterator it = this->targets.begin();
	std::set<ATarget*>::iterator ite = this->targets.end();

	while (it != ite)
	{
		if ((*it)->getType() == target_name)
		{
			this->targets.erase(*it);
			break;
		}
		++it;
	}
}

ATarget*	TargetGenerator::createTarget(std::string const & target_name)
{
	std::set<ATarget*>::iterator it = this->targets.begin();
	std::set<ATarget*>::iterator ite = this->targets.end();

	while (it != ite)
	{
		if ((*it)->getType() == target_name)
			return (*it);
		++it;
	}
	return (NULL);
}
