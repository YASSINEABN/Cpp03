#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>


    class ClapTrap
    {
    protected:
        std::string _name;
        int _HitPoint;
        int _EnergyPoint;
        int _AttackDamage;

    public:
        ClapTrap();
        ClapTrap( std::string name);
        ClapTrap(const ClapTrap &obj);
        ClapTrap &operator=( const ClapTrap &obj);

        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        std::string getname();
        int getHitpoint();
        int getEnergyPoint();
        int getAttackDamage();
        std::string get_name();
        void setHitpoint(int value);
        void setEnergyPoint(int value);
        void setAttackDamage(int value);
        void setname(std::string name);

    };
    
    

#endif 