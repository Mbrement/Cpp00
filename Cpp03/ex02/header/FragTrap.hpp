#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <string>

class FragTrap : public ClapTrap
{

public :
/*cannonical form*/
	FragTrap();
	FragTrap(const std::string &name);
	FragTrap(const FragTrap &FragTrap);
	~FragTrap();
	FragTrap	&operator=(const FragTrap &FragTrap);
/*cannonical form*/
	void highFiveGuys();

private	:
};
#endif
