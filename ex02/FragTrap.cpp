#include "FragTrap.hpp"

// Constructors
FragTrap::FragTrap(): ClapTrap()
{
	this->hp = 100;
	this->energy = 100;
	this->attackdmg = 30;
	std::cout << "FragTrap Default Constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy): ClapTrap(copy)
{
	std::cout << "FragTrap Copy Constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->hp = 100;
	this->energy = 100;
	this->attackdmg = 30;
	std::cout << "FragTrap Constructor for the name " << this->name << " called" << std::endl;
}

// Deconstructors
FragTrap::~FragTrap()
{
	std::cout << "FragTrap Deconstructor for " << this->name << " called" << std::endl;
}

// Overloaded Operators
FragTrap &FragTrap::operator=(const FragTrap &src)
{
	std::cout << "FragTrap Assignation operator called" << std::endl;
	this->name = src.name;
	this->hp = src.hp;
	this->energy = src.energy;
	this->attackdmg = src.attackdmg;
	return *this;
}

// Public Methods

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->name << ": You want a high five?\n\t*WHAMM*\nHere you go." << std::endl;
}