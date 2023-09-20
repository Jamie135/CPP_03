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
	unsigned int	attackdmg;
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &copy);
	~ClapTrap();
	ClapTrap &operator=(const ClapTrap &src);
	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	const std::string	&getName() const;
	unsigned int		getHP() const;
	unsigned int		getEnergy() const;
	unsigned int		getAttack() const;
	void	setName(const std::string &name);
	void	setHP(unsigned int amount);
	void	setEnergy(unsigned int amount);
	void	setAttack(unsigned int amount);
};

#endif