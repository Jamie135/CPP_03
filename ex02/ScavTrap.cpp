#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	std::cout << "ScavTrap Default Constructor called" << std::endl;
	setHP(100);
	setEnergy(50);
	setAttack(20);
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << "ScavTrap " << getName() << " Constructor called" << std::endl;
	setHP(100);
	setEnergy(50);
	setAttack(20);
	this->guard = false;
}

ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(copy.getName())
{
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
	setHP(copy.getHP());
	setEnergy(copy.getEnergy());
	setAttack(copy.getAttack());
	this->guard = copy.guard;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << getName() << " Destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
	std::cout << "ScavTrap Assignation operator called" << std::endl;
	setName(src.getName());
	setHP(src.getHP());
	setEnergy(src.getEnergy());
	setAttack(src.getAttack());
	return *this;
}

void	ScavTrap::attack(const std::string &target)
{
	if (getEnergy() > 0 && getHP() > 0)
	{
		std::cout << "ScavTrap " << getName() << " attacks " << target << ", causing " << getAttack() << " points of damage!" << std::endl;
		setEnergy(getEnergy() - 1);
	}
	else if (getEnergy() == 0)
		std::cout << "ScavTrap " << getName() << " is not able to attack " << target << ", because he has no energy points left." << std::endl;
	else
		std::cout << "ScavTrap " << getName() << " is not able to attack " << target << ", because he has not enough hit points." << std::endl;
}

void	ScavTrap::guardGate(void)
{
	if (this->guard == false)
	{
		this->guard = true;
		std::cout << "ScavTrap " << getName() << " is now guarding the gate." << std::endl;
	}
	else
		std::cout << "ScavTrap " << getName() << " is already guarding the gate." << std::endl;
}