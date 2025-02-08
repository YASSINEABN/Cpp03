
#include "FragTrap.hpp"



int	main(void)
{
	
	ClapTrap *alice = new FragTrap("Alice");

	alice->attack("Bob");
	alice->attack("Bob1");
	
	delete(alice);
}
