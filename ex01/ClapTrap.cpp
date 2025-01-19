#include "ClapTrap.hpp"


ClapTrap::ClapTrap():_name("default"),_HitPoint(100),_EnergyPoint(50),_AttackDamage(20)
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

 ClapTrap &ClapTrap::operator=( const ClapTrap &obj)
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


ClapTrap::ClapTrap(std::string name):_HitPoint(100),_EnergyPoint(50),_AttackDamage(20)
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
    {
        std::cout<< "there is no Hit point || energy points" << std::endl;
        return;
    }
   this->_EnergyPoint--;
   std::cout <<  "ClapTrap " << this->_name << " attacks " << target  << ", causing " << this->_AttackDamage <<  " points of damage! " << std::endl ;
}
void ClapTrap::takeDamage(unsigned int amount)
{
   if(this->_HitPoint <= 0 )
   {
        std::cout<< "there is no Hit point " << std::endl;
        return ;
   }
   	std::cout << "ClapTrap " << this->_name << " took " << amount << " point(s) of damage!" << std::endl;
    this->_HitPoint-=amount;
    if(this->_HitPoint < 0)
        this->_HitPoint= 0;
}
void ClapTrap::beRepaired(unsigned int amount)
{
   if(this->_HitPoint <= 0 || this->_EnergyPoint <= 0)
   {
        std::cout<< "there is no Hit point || energy points" << std::endl;
        return ;
   }
    std::cout << "ClapTrap " << this->_name << " be repaired with  " << amount << std::endl;
    this->_HitPoint+=amount;
    this->_EnergyPoint--;
}

int ClapTrap::getAttackDamage()
{
    return this->_AttackDamage;
}

int  ClapTrap::getEnergyPoint()
{
    return this->_EnergyPoint;
}

int ClapTrap::getHitpoint()
{
    return this->_HitPoint;
}

std::string ClapTrap::get_name()
{
    return this->_name;
}

void ClapTrap::setAttackDamage(int value)
{
    this->_AttackDamage = value;
}
void ClapTrap::setname(std::string name)
{
    this->_name = name;
}

void ClapTrap::setHitpoint(int value)
{
    this->_HitPoint = value;
}

void ClapTrap::setEnergyPoint(int value)
{
    this->_EnergyPoint = value;
}
