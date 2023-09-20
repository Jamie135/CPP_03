#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	setHP(100);
	setEnergy(100);
	setAttack(30);
	std::cout << "FragTrap Default Constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy): ClapTrap(copy.getName())
{
	setHP(100);
	setEnergy(100);
	setAttack(30);
	std::cout << "FragTrap Copy Constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	setHP(100);
	setEnergy(100);
	setAttack(30);
	std::cout << "FragTrap Constructor for the name " << getName() << " called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Deconstructor for " << getName() << " called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &src)
{
	std::cout << "FragTrap Assignation operator called" << std::endl;
	setName(src.getName());
	setHP(src.getHP());
	setEnergy(src.getEnergy());
	setAttack(src.getAttack());
	return *this;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << getName() << ": You want a high five?\n\t*WHAMM*\nHere you go." << std::endl;
}