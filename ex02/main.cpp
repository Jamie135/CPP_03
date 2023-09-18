#include "ClapTrap.hpp"

int main()
{
	std::cout << "Constructor" << std::endl;
	ClapTrap a;
	ClapTrap b("Shrek");

	a.attack("Farquad");
	a.takeDamage(10);
	a.takeDamage(10);
	a.beRepaired(5);
	a.attack("Farquad");
	b.beRepaired(3);
	for (int i = 0; i < 12; i++)
		b.attack("Charming");
	b.beRepaired(3);
	std::cout << "Deconstructor" << std::endl;
	return (0);
}