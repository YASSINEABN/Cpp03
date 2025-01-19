#include "FragTrap.hpp"

FragTrap::~FragTrap()
{
    std::cout << "destructor of Fragtrap is called"<< std::endl;
}

FragTrap::FragTrap()
{
    std::cout << "default constructor for FragTrap is called" << std::endl;
    this->_AttackDamage= 30;
    this->_EnergyPoint = 100;
    this->_HitPoint = 100;
}
    void FragTrap::highFivesGuys(void)
    {
            std::cout << "special message for FragTrap class" << std::endl;
    }
    FragTrap::FragTrap(const FragTrap &obj):ClapTrap()
    {
        this->_AttackDamage= obj._AttackDamage;
        this->_EnergyPoint = obj._EnergyPoint;
        this->_HitPoint = obj._HitPoint;
        this->_name = obj._name;
    }
    FragTrap &FragTrap::operator=(FragTrap &obj)
        {
                if(this != &obj)
                {
                    this->_AttackDamage = obj._AttackDamage;
                    this->_EnergyPoint = obj._EnergyPoint;
                    this->_HitPoint = obj._HitPoint;
                }
                return *this;
        }   


void FragTrap::attack(const std::string &target)
{
    if(this->_HitPoint <= 0 || this->_EnergyPoint <= 0)
        return ;
   this->_EnergyPoint++;
   std::cout <<  "FragTrap" << this->_name << " attacks " << target  << "causing" << this->_AttackDamage <<  "points of damage! " ;
}



