#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>

class	Warlock
{
	public:
		Warlock(std::string const name, std::string const title);
		~Warlock(void);
		std::string const	getName(void) const;
		std::string const	getTitle(void) const;
		void			setTitle(std::string const & title);
		void			introduce(void) const;
	private:
		Warlock(void);
		Warlock(Warlock const & rhs);
		Warlock&		operator=(Warlock const & rhs);
		std::string	name;
		std::string	title;
};

#endif
