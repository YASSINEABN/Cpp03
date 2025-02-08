#include "ScavTrap.hpp"



int	main(void)
{
	ClapTrap *ptr = new ScavTrap("ennemie");
	ptr->attack("yassine");
	delete(ptr);

}