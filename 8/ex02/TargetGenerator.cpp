#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{
}

TargetGenerator::~TargetGenerator(void)
{
	std::set<ATarget*>::iterator it = this->_targets.begin();
	std::set<ATarget*>::iterator ite = this->_targets.end();

	while (it != ite)
	{
		delete *it;
		++it;
	}
}

void			TargetGenerator::learnTargetType(ATarget * target)
{
	if (target)
		this->_targets.insert(target->clone());
}

void			TargetGenerator::forgetTargetType(std::string const & target_type)
{
	std::set<ATarget*>::iterator it = this->_targets.begin();
	std::set<ATarget*>::iterator ite = this->_targets.end();

	while (it != ite)
	{
		if ((*it)->getType() == target_type)
		{
			delete *it;
			this->_targets.erase(*it);
			break;
		}
		++it;
	}
}

ATarget*			TargetGenerator::createTarget(std::string const & target_type)
{
	std::set<ATarget*>::iterator it = this->_targets.begin();
	std::set<ATarget*>::iterator ite = this->_targets.end();

	while (it != ite)
	{
		if ((*it)->getType() == target_type)
			return (*it);
		++it;
	}
	return (NULL);
}
