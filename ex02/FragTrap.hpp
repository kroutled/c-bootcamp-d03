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

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

    public:
        FragTrap( std::string name = "Bill(default)" );
        FragTrap( FragTrap const &src );
        ~FragTrap( void );

        FragTrap &operator=(FragTrap const &rhs);

        void    FragTrap::rangedAttack(std::string const &target);
        void    FragTrap::meleeAttack(std::string const &target);
        void    vaulthunter_dot_exe(std::string const &target);

};

#endif
