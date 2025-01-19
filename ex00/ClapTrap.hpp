#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>


    class ClapTrap
    {
    private:
        std::string _name;
        int _HitPoint;
        int _EnergyPoint;
        int _AttackDamage;

    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &obj);
        ClapTrap &operator=( ClapTrap &obj);

        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
    };
    
    

#endif 