#include "ScavTrap.hpp"

int main()
{
	std::cout << "\033[34mConstructor\033[0m" << std::endl;
	ClapTrap a;
	ClapTrap b("Shrek");
	std::cout << "\033[34mTesting\033[0m" << std::endl;
	a.attack("Farquad");
	a.takeDamage(10);
	a.takeDamage(10);
	a.beRepaired(5);
	a.attack("Farquad");
	b.beRepaired(3);
	for (int i = 0; i < 12; i++)
		b.attack("Charming");
	b.beRepaired(3);
	std::cout << "\033[34mDeconstructor\033[0m" << std::endl;
	std::cout << "\033[34mConstructor\033[0m" << std::endl;
	ScavTrap c;
	ScavTrap d("Donkey");
	std::cout << "\033[34mTesting\033[0m" << std::endl;
	c.attack("CloneTrap");
	// for (int i = 0; i < 50; i++)
	// 	c.attack("CloneTrap");
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