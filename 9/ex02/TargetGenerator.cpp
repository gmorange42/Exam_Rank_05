#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator(void)
{
	std::set<ATarget*>::const_iterator it = this->targets.begin();
	std::set<ATarget*>::const_iterator ite = this->targets.end();

	while (it != ite)
	{
		delete *it;
		++it;
	}
}

void			TargetGenerator::learnTargetType(ATarget* target)
{
	if (!target)
		return ;

	std::set<ATarget*>::const_iterator it = this->targets.begin();
	std::set<ATarget*>::const_iterator ite = this->targets.end();

	while (it != ite)
	{
		if ((*it)->getType() == target->getType())
			return ;
		++it;
	}
	this->targets.insert(target->clone());
}

void			TargetGenerator::forgetTargetType(std::string const & target_type)
{

	std::set<ATarget*>::const_iterator it = this->targets.begin();
	std::set<ATarget*>::const_iterator ite = this->targets.end();

	while (it != ite)
	{
		if ((*it)->getType() == target_type)
		{
			delete *it;
			this->targets.erase(*it);
			break;
		}
		++it;
	}
}

ATarget*			TargetGenerator::createTarget(std::string const & target_type)
{

	std::set<ATarget*>::const_iterator it = this->targets.begin();
	std::set<ATarget*>::const_iterator ite = this->targets.end();

	while (it != ite)
	{
		if ((*it)->getType() == target_type)
			return (*it);
		++it;
	}
	return (NULL);
}
