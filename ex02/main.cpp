#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	std::cout << "### CLAPTRAP ###\n" << std::endl;
	std::cout << "\033[34mConstructor\033[0m" << std::endl;
	ClapTrap a("Shrek");
	ClapTrap b("Fiona");
	std::cout << "\033[34mMethods\033[0m" << std::endl;
	a.attack("Farquaad");
	a.takeDamage(10);
	a.takeDamage(10);
	a.beRepaired(5);
	a.attack("Farquaad");
	b.beRepaired(3);
	// for (int i = 0; i < 12; i++)
	// 	b.attack("Charming");
	b.beRepaired(3);
	std::cout << "\n### SCAVTRAP ###\n" << std::endl;
	std::cout << "\033[34mConstructor\033[0m" << std::endl;
	ScavTrap c("Donkey");
	ScavTrap d("PussInBoots");
	std::cout << "\033[34mMethods\033[0m" << std::endl;
	c.attack("Dragon");
	// for (int i = 0; i < 50; i++)
	// 	c.attack("Dragon");
	c.beRepaired(22);
	c.takeDamage(21);
	c.beRepaired(22);
	c.guardGate();
	c.guardGate();
	d.attack("Death");
	d.takeDamage(101);
	d.takeDamage(15);
	d.attack("Death");
	std::cout << "\n### FRAGTRAP ###\n" << std::endl;
	std::cout << "\033[34mConstructor\033[0m" << std::endl;
	FragTrap e("Gingerbread");
	FragTrap f("Merlin");
	std::cout << "\033[34mMethods\033[0m" << std::endl;
	e.highFivesGuys();
	e.attack("Godmother");
	e.takeDamage(101);
	e.takeDamage(1);
	e.attack("Godmother");
	f.highFivesGuys();
	for(int i = 0; i < 101; i++)
		f.attack("Rumpelstiltskin");
	std::cout << "\033[34mDestructor\033[0m" << std::endl;
	return (0);
}