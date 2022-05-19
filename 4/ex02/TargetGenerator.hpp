#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP

#include <iostream>
#include <set>
#include "ATarget.hpp"

class TargetGenerator
{
	public:
		TargetGenerator(void);
		TargetGenerator(TargetGenerator const & rhs);
		TargetGenerator&	operator=(TargetGenerator const & rhs);
		~TargetGenerator(void);
		void	learnTargetType(ATarget* target);
		void	forgetTargetType(std::string const & target_name);
		ATarget*	createTarget(std::string const & target_name);
	private:
		std::set<ATarget*> targets;
};

#endif
