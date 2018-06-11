/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroutled <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 16:34:24 by kroutled          #+#    #+#             */
/*   Updated: 2018/06/07 16:34:26 by kroutled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <string>

class ScavTrap {

    private:
        std::string     _name;
        int             _hitPoints;
        int             _maxHitPoints;
        int             _energyPoints;
        int             _maxEnergyPoints;
        int             _level;
        int             _meleeAttackDmg;
        int             _rangedAttackDmg;
        int             _armorDmgReduction;

    public:
        ScavTrap( std::string name = "Lenny(default)" );
        ScavTrap( ScavTrap const &src );
        ~ScavTrap( void );

        void    rangedAttack( std::string const &target );
        void    meleeAttack( std::string const &target );
        void    takeDamage( unsigned int amount );
        void    beRepaired( unsigned int amount );

        ScavTrap &operator=(ScavTrap const &rhs);

        void    challengeNewcomer( void );

};

#endif

