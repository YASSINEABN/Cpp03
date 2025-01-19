#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    this->_AttackDamage = 20;
    this->_EnergyPoint =  50;
    this->_HitPoint = 100;
    std::cout << "default constructor for Scavtrap is called" << std::endl;
}

ScavTrap::ScavTrap( ScavTrap &obj):ClapTrap(_name)
{
    this->_AttackDamage = obj._AttackDamage;
    this->_EnergyPoint = obj._EnergyPoint;
    this->_HitPoint = obj._HitPoint;
    this->capacity = obj.capacity;
    std::cout << "Constructer for Scavtrap copy is called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &obj)
{
    if(this != &obj)
    {
        this->_AttackDamage = obj._AttackDamage;
        this->_EnergyPoint = obj._EnergyPoint;
        this->_HitPoint = obj._HitPoint;
    }
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "destructor for ScavTrap is called " << std::endl;
}
void ScavTrap::attack(const std::string &target)
{
    if(this->_HitPoint <= 0 || this->_EnergyPoint <= 0)
        return ;
   this->_EnergyPoint++;
   std::cout <<  "ScavTrap" << this->_name << "   attacks   " << target  << " causing " << this->_AttackDamage <<  "points of damage! " << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "special message" << std::endl;
}



