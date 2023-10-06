#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap Default Constructor called" << std::endl;
	this->hp = 10;
	this->energy = 10;
	this->attackdmg = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->hp = 10;
	this->energy = 10;
	this->attackdmg = 0;
	std::cout << "ClapTrap " << this->name << " Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->name << " Destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
	std::cout << "ClapTrap Assignation operator called" << std::endl;
	this->name = src.name;
	this->hp = src.hp;
	this->energy = src.energy;
	this->attackdmg = src.attackdmg;
	return *this;
}

const std::string	&ClapTrap::getName() const
{
	return (name);
}

unsigned int	ClapTrap::getHP() const
{
	return (hp);
}

unsigned int	ClapTrap::getEnergy() const
{
	return (energy);
}

unsigned int	ClapTrap::getAttack() const
{
	return (attackdmg);
}

void	ClapTrap::setName(const std::string &name)
{
	this->name = name;
}

void	ClapTrap::setHP(unsigned int amount)
{
	hp = amount;
}

void	ClapTrap::setEnergy(unsigned int amount)
{
	energy = amount;
}

void	ClapTrap::setAttack(unsigned int amount)
{
	attackdmg = amount;
}

void	ClapTrap::attack(const std::string &target)
{
	if (energy > 0 && hp > 0)
	{
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackdmg << " points of damage!" << std::endl;
		energy--;
	}
	else if (energy == 0)
		std::cout << "ClapTrap " << name << " is not able to attack " << target << ", because he has no energy points left" << std::endl;
	else
		std::cout << "ClapTrap " << name << " is not able to attack " << target << ", because he has not enough hit points" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (hp > amount)
		hp -= amount;
	else if (hp > 0)
		hp = 0;
	else
	{
		std::cout << "ClapTrap " << name << " is already dead, stop beating it" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << name << " was attacked and lost " << amount << " hit points, he now has " << hp << " hit points." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (energy > 0 && hp > 0 && hp + amount <= 10)
	{
		hp += amount;
		std::cout << "ClapTrap " << name << " repaired itself and gained " << amount << " of hit points, he now has " << hp << "hit points." << std::endl;
		energy--;
	}
	else if (energy == 0)
		std::cout << "ClapTrap " << name << " is not able to repair itself, because he doesn't have enough energy points" << std::endl;
	else if (hp == 0)
		std::cout << "ClapTrap " << name << " is not able to repair itself, because he doesn't have enough hit points" << std::endl;
	else
		std::cout << "ClapTrap " << name << " can't be repaired to have more than 10 hit points" << std::endl;
}
