#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP
# include <iostream>
# include <string>

class ClapTrap
{
private:
	std::string		name;
	unsigned int	hp;
	unsigned int	energy;
	unsigned int	attack;
public:
	ClapTrap();
	~ClapTrap();
	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif