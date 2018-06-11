/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroutled <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 16:35:16 by kroutled          #+#    #+#             */
/*   Updated: 2018/06/07 16:35:19 by kroutled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ) : ClapTrap(name, 100, 100, 100, 100, 1, 30,20, 5)
{
    std::cout << "Commencing directive three! Uhntssuhntssuhntss--" << std::endl;
    return;
}

FragTrap::~FragTrap( void )
{
    std::cout << "I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
    return;
}


FragTrap &FragTrap::operator=(FragTrap const &rhs)
{
    ClapTrap::operator = (rhs);
    return *this;
}

FragTrap::FragTrap( FragTrap const &src ) : ClapTrap(src)
{
    *this = src;
    return;
}

void    FragTrap::vaulthunter_dot_exe(std::string const &target)
{
    std::string attacks[6] = {"gets down like Arnold", "pulls funny face!", "screams","runs away","hits you in the face","tunes your mom"};

    int i = rand() % 6;
    int energyUsed = 25;
    if (energyUsed > _energyPoints)
    {
        std::cout << "not enough energy!" << std::endl;
    }
    else
    {
        std::cout << _name << " uses a special ability and " << attacks[i] << "...what will " << target << " do next?!" << std::endl;
        _energyPoints -= 25;
    }
}