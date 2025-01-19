#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
        int capacity;
public:
    FragTrap();
    FragTrap(std::string name):ClapTrap(name){};
    FragTrap(const FragTrap &obj);
    FragTrap &operator=(FragTrap &obj);
    ~FragTrap();
    void highFivesGuys(void);
    void attack(const std::string &target);
};


 

#endif