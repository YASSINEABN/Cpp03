#include "ClapTrap.hpp"


ClapTrap::ClapTrap():_HitPoint(10),_EnergyPoint(10),_AttackDamage(0)
{
    std::cout << "Default Constructer for ClapTrap  is called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
: _name(obj._name),
_HitPoint(obj._HitPoint),
_EnergyPoint(obj._EnergyPoint),
 _AttackDamage(obj._AttackDamage)
{
    std::cout << "Constructer copy is called" << std::endl;
}

 ClapTrap &ClapTrap::operator=( ClapTrap &obj)
 {
        if(this != &obj)
        {
            this->_AttackDamage= obj._AttackDamage;
            this->_EnergyPoint = obj._EnergyPoint;
            this->_name = obj._name;
            this->_HitPoint = obj._HitPoint;
        }
            return *this;
 }


ClapTrap::ClapTrap(std::string name)
{
    this->_name = name;
    std::cout << "Constructer is called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor is called" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if(this->_HitPoint <= 0 || this->_EnergyPoint <= 0)
        return ;
   this->_EnergyPoint++;
   std::cout <<  "ClapTrap" << this->_name << " attacks " << target  << "causing" << this->_AttackDamage <<  "points of damage! " ;
}
void ClapTrap::takeDamage(unsigned int amount)
{
   if(this->_HitPoint <= 0 || this->_EnergyPoint <= 0)
        return ;
  
    this->_HitPoint-=amount;
}
void ClapTrap::beRepaired(unsigned int amount)
{
   if(this->_HitPoint <= 0 || this->_EnergyPoint <= 0)
        return ;
    this->_HitPoint+=amount;
    this->_EnergyPoint++;
}


