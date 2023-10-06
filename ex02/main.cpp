#include "ScavTrap.hpp"

int main()
{
	std::cout << "\033[34mConstructor\033[0m" << std::endl;
	ClapTrap a("Shrek");
	ClapTrap b("PussInBoots");
	std::cout << "\033[34mTesting\033[0m" << std::endl;
	a.attack("Farquaad");
	a.takeDamage(10);
	a.takeDamage(10);
	a.beRepaired(5);
	a.attack("Farquaad");
	b.beRepaired(3);
	for (int i = 0; i < 12; i++)
		b.attack("Charming");
	b.beRepaired(3);
	std::cout << "\033[34mDeconstructor\033[0m" << std::endl;
	std::cout << "\033[34mConstructor\033[0m" << std::endl;
	ScavTrap c("Donkey");
	ScavTrap d("Fiona");
	std::cout << "\033[34mTesting\033[0m" << std::endl;
	c.attack("Dragon");
	// for (int i = 0; i < 50; i++)
	// 	c.attack("Dragon");
	c.beRepaired(22);
	c.takeDamage(21);
	c.beRepaired(22);
	c.guardGate();
	c.guardGate();
	d.attack("Dragon");
	d.takeDamage(101);
	d.takeDamage(15);
	d.attack("Dragon");
	std::cout << "\033[34mDeconstructor\033[0m" << std::endl;
	return (0);
}