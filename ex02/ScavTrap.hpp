#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap
{
private:
    int capacity;
public:

    ScavTrap();
    ScavTrap(const std::string name):ClapTrap(name){};
    ScavTrap( ScavTrap &obj);
    ScavTrap &operator=(const ScavTrap &obj);
    void attack(const std::string &target);
    ~ScavTrap();
    void guardGate();
    
};


#endif
