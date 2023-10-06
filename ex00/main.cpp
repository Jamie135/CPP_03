#include "ClapTrap.hpp"

int main()
{
	std::cout << "Constructor" << std::endl;
	ClapTrap a("Shrek");
	ClapTrap b("PussInBoots");

	a.attack("Farquaad");
	a.takeDamage(10);
	a.takeDamage(10);
	a.beRepaired(5);
	a.attack("Farquaad");
	b.beRepaired(3);
	for (int i = 0; i < 12; i++)
		b.attack("Charming");
	b.beRepaired(3);
	std::cout << "Deconstructor" << std::endl;
	return (0);
}