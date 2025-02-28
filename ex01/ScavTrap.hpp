#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap
{
public:

    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const &copy);
    ScavTrap &operator=(const ScavTrap &obj);
    ~ScavTrap();
    void guardGate();
    void attack(const std::string &target);

    
};



#endif
