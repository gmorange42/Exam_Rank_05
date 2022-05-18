#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(void) {}

TargetGenerator::~TargetGenerator(void) {}

void    TargetGenerator::learnTargetType(ATarget* target)
{
	this->targets.insert(target);
}

void    TargetGenerator::forgetTargetType(std::string const & target_name)
{
	std::set<ATarget*>::const_iterator it = this->targets.begin();
	std::set<ATarget*>::const_iterator ite = this->targets.end();

	while(it != ite)
	{
		if ((*it)->getType() == target_name)
		{
			this->targets.erase(*it);
			break;
		}
		++it;
	}

}

ATarget*        TargetGenerator::createTarget(std::string const & target_type)
{
	std::set<ATarget*>::const_iterator it = this->targets.begin();
	std::set<ATarget*>::const_iterator ite = this->targets.end();

	while (it != ite)
	{
		if ((*it)->getType() == target_type)
			return (*it);
		it++;
	}
	return (NULL);
}
