#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap Default Constructor called" << std::endl;
	this->hp = 10;
	this->energy = 10;
	this->attackdmg = 0;
}

ClapTrap::ClapTrap(const std::string &name)
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
	std::cout << "ClapTrap " << name << " Destructor called" << std::endl;
}

