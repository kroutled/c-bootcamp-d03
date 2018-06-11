/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroutled <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 10:01:08 by kroutled          #+#    #+#             */
/*   Updated: 2018/06/08 10:01:09 by kroutled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {

    private:
        int             _maxHitPoints;
        int             _maxEnergyPoints;
        int             _level;
        int             _meleeAttackDmg;
        int             _rangedAttackDmg;
        int             _armorDmgReduction;

    protected:
        std::string     _name;
        int             _hitPoints;
        int             _energyPoints;

    public:
        ClapTrap( std::string name = "Timmay!Default" );
        ClapTrap( ClapTrap const &src);
        ClapTrap(std::string name, int _hitPoints, int _maxHitPoints, int _energyPoints, int _maxEnergyPoints,
                        int _level, int meleeAttackDmg, int _rangedAttackDmg, int _armorDmgReduction);
        ~ClapTrap( void );

        virtual void    rangedAttack(std::string const & target) = 0;
        virtual void    meleeAttack(std::string const & target) = 0;
        void            takeDamage(unsigned int amount);
        void            beRepaired(unsigned int amount);

        ClapTrap    &operator=( ClapTrap const &rhs);
};

#endif
