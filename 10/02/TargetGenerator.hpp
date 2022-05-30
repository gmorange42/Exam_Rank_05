#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP

#include <iostream>
#include <set>
#include "ASpell.hpp"
#include "ATarget.hpp"

class	TargetGenerator
{
	public:
		TargetGenerator(void);
		~TargetGenerator();
		void			learnTargetType(ATarget * target);
		void			forgetTargetType(std::string target_type);
		ATarget*		createTarget(std::string target_type);
	private:
		TargetGenerator(TargetGenerator const & rhs);
		TargetGenerator&	operator=(TargetGenerator const & rhs);
		std::set<ATarget*>	targets;
};

#endif
