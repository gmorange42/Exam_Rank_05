#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>

class	Warlock
{
	public:
		Warlock(std::string new_name, std::string new_title);
		~Warlock();
		std::string const &	getName() const;
		std::string const &	getTitle() const;
		void			setTitle(std::string const & new_title);
		void			introduce(void) const;
	private:
		Warlock(void);
		Warlock(Warlock const & rhs);
		Warlock&	operator=(Warlock const & rhs);
		std::string	name;
		std::string	title;
};

#endif
