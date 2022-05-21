#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP

#include <iostream>
#include <set>
#include "ATarget.hpp"
#include "ATarget.hpp"

class TargetGenerator
{
	public:
		TargetGenerator(void);
		~TargetGenerator(void);
		void			learnTargetType(ATarget* target);
		void			forgetTargetType(std::string const & target_name);
		ATarget*			createTarget(std::string const & target_name);
	private:
		TargetGenerator(TargetGenerator const & rhs);
		TargetGenerator&	operator=(TargetGenerator const & rhs);
		std::set<ATarget*>	targets;
};

#endif
