#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "default constructor for Scavtrap is called" << std::endl;
}

ScavTrap::ScavTrap(std::string  name): ClapTrap(name)
{
	std::cout << "ScavTrap from ClapTrap " << this->_name << " created." << std::endl;
}


ScavTrap::ScavTrap(ScavTrap const &copy): ClapTrap(copy)
{
	std::cout << "ScavTrap from ClapTrap " << this->_name << " copied." << std::endl;
}

 ScavTrap &ScavTrap::operator=(const ScavTrap &obj)
{
    std::cout << "Assignment operator for ScavTrap called." << std::endl;
	ClapTrap::operator=(obj);
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "destructor for ScavTrap is called " << std::endl;
}

void	ScavTrap::guardGate(void)
{
	if (this->_HitPoint <= 0)
		std::cout << "Cannot switch to gate-keeper mode because: ClapTrap " << this->_name << " is dead." << std::endl;
	else
		std::cout << "ScavTrap from ClapTrap " << this->_name << " switched to mode: \"Guard Gate\"." << std::endl;
}
void ScavTrap::attack(const std::string &target)
{
	std::cout << "hello m scavtrap" << target;
}

