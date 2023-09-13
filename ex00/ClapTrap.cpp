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
	std::cout << "ClapTrap " << this->name << " Constructor called" << std::endl;
	this->name = name;
	this->hp = 10;
	this->energy = 10;
	this->attackdmg = 0;
}

ClapTrap::ClapTrap(ClapTrap &copy)
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
