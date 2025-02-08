#include "FragTrap.hpp"

FragTrap::~FragTrap()
{
    std::cout << "destructor of Fragtrap is called"<< std::endl;
}

FragTrap::FragTrap()
{
    std::cout << "default constructor for FragTrap is called" << std::endl;
   
}
 FragTrap::FragTrap(const std::string &name):ClapTrap(name)
 {
    std::cout << "constructor parametrised is called " << std::endl;
 }
    void FragTrap::highFivesGuys(void)
    {
            if (this->_HitPoint <= 0)
		std::cout << "Cannot high five because: ClapTrap " << this->_name << " is dead." << std::endl;
	    else
		std::cout << "FragTrap from ClapTrap " << this->_name << " says: \"HIGH FIVE EVERYONE! :)\"." << std::endl;
    }
    FragTrap::FragTrap(const FragTrap &obj):ClapTrap(obj)
    {
            std::cout << "copy constructor for FragTrap is called" << std::endl;

    }
    FragTrap &FragTrap::operator=(FragTrap &obj)
        {
                std::cout << "assinement operator = for FragTrap is called" << std::endl;
                ClapTrap::operator=(obj);
                return *this;
        }   




