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

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

    public:
        ScavTrap( std::string name = "Lenny(default)" );
        ScavTrap( ScavTrap const &src );
        ~ScavTrap( void );

        ScavTrap &operator=(ScavTrap const &rhs);

        void    ScavTrap::meleeAttack(std::string const &target);
        void    ScavTrap::rangedAttack(std::string const &target);
        void    challengeNewcomer( void );

};

#endif

