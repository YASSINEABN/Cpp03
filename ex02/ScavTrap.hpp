#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap
{
private:
    int capacity;
public:

    ScavTrap();
    ScavTrap(std::string const &name): ClapTrap(name){};
    ScavTrap(ScavTrap const &copy);
    ScavTrap &operator=(const ScavTrap &obj);
    void attack(const std::string &target);
    ~ScavTrap();
    void guardGate();
    
};



#endif
