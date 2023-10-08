#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name("default"), hp(10), energy(10), attackdmg(0)
{
	std::cout << "ClapTrap Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "ClapTrap Copy Constructor called" << std::endl;
	*this = copy;
}

ClapTrap::ClapTrap(std::string name): name(name), hp(10), energy(10), attackdmg(0)
{
	std::cout << "ClapTrap " << name << " Constructor called" << std::endl;
}

// Destructors
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " Destructor called" << std::endl;
}

// Overloaded Operators
ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
	std::cout << "ClapTrap Assignation operator called" << std::endl;
	this->name = src.name;
	this->hp = src.hp;
	this->energy = src.energy;
	this->attackdmg = src.attackdmg;
	return *this;
}

// Public Methods
void	ClapTrap::attack(const std::string &target)
{
	if (this->energy > 0 && this->hp > 0)
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", dealing " << this->attackdmg << " points of damage!" << std::endl;
		this->energy--;
	}
	else if (this->energy == 0)
		std::cout << "\033[31mClapTrap " << this->name << " is not able to attack " << target << ", because he has no energy points left.\033[0m" << std::endl;
	else
		std::cout << "\033[31mClapTrap " << this->name << " is not able to attack " << target << ", because he has not enough hit points.\033[0m" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hp > amount)
		this->hp -= amount;
	else if (this->hp > 0)
		this->hp = 0;
	else
	{
		std::cout << "\033[33mClapTrap " << this->name << " is already dead.\033[0m" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " was attacked and lost " << amount << " hit points. Remaining hit points: " << this->hp << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy > 0 && this->hp > 0 && this->hp + amount <= 10)
	{
		this->hp += amount;
		std::cout << "ClapTrap " << this->name << " repaired itself and gained " << amount << " hit points. Remaining hit points: " << this->hp << std::endl;
		this->energy--;
	}
	else if (this->energy == 0)
		std::cout << "\033[31mClapTrap " << this->name << " is not able to repair itself, because he doesn't have enough energy points.\033[0m" << std::endl;
	else if (this->hp == 0)
		std::cout << "\033[31mClapTrap " << this->name << " is not able to repair itself, because he doesn't have enough hit points.\033[0m" << std::endl;
	else
		std::cout << "\033[33mClapTrap " << this->name << " is already at full hit points.\033[0m" << std::endl;
}