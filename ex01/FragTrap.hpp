/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroutled <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 16:35:22 by kroutled          #+#    #+#             */
/*   Updated: 2018/06/07 16:35:24 by kroutled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>

class FragTrap {

    private:
        int         _hitPoints;
        int         _maxHitPoints;
        int         _energyPoints;
        int         _maxEnergyPoints;
        int         _level;
        std::string _name;
        int         _meleeAttackDmg;
        int         _rangedAttackDmg;
        int         _armorDmgReduction;

    public:
        FragTrap( std::string name = "Bill(default)" );
        FragTrap( FragTrap const &src );
        ~FragTrap( void );

        void    rangedAttack(std::string const & taget);
        void    meleeAttack(std::string const & target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);

        FragTrap &operator=(FragTrap const &rhs);

        void    vaulthunter_dot_exe(std::string const &target);

};

#endif
