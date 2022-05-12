#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>

class	Warlock
{
	public:
		Warlock(std::string name, std::string title);
		~Warlock(void);
		std::string	getName(void) const;
		std::string	getTitle(void) const;
		void		setTitle(std::string const & title);
		void		introduce(void) const;
	private:
		Warlock(void);
		Warlock(Warlock const & rhs);
		Warlock&	operator=(Warlock const & rhs);
		std::string	_name;
		std::string	_title;
};

#endif
