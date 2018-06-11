/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroutled <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 16:34:12 by kroutled          #+#    #+#             */
/*   Updated: 2018/06/07 16:34:15 by kroutled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string  name) : ClapTrap(name, 100, 100, 100, 100, 1, 30,20, 5)
{
    std::cout << "Booting sequence complete. Hello! I am your new steward bot." << std::endl;
    return;
}

ScavTrap::ScavTrap( ScavTrap const &src ) : ClapTrap(src)
{
    *this = src;
    return;
}

ScavTrap::~ScavTrap( void )
{
    std::cout << "What is it Angel?" << std::endl;
    return;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
{
    ClapTrap::operator=(rhs);

    return *this;
}

void    ScavTrap::rangedAttack(std::string const &target)
{
    std::cout << "ScavTrap ranged attack done by " << this->_name << " has hit " << target << std::endl;
}

void    ScavTrap::meleeAttack(std::string const &target)
{
    std::cout << "ScavTrap melee attack done by " << this->_name << " to " << target << std::endl;
}

void    ScavTrap::challengeNewcomer( void )
{
    std::string     challenges[5] = {"beer drinking challenge", "baby throwing challenge", "breath holding challenge...wait we're robots :(", "beep making challenge", "tickle challenge"};
    int             i = 0;

    i = rand() % 5;
    std::cout << "ah oh...looks like " << _name << " has challenged you to a " << challenges[i] << ", how do you respond?" << std::endl;
}
