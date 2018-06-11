/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroutled <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 10:20:08 by kroutled          #+#    #+#             */
/*   Updated: 2018/06/07 10:20:10 by kroutled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"


int     main(void)
{
    srand(time(NULL));

    FragTrap robot = FragTrap("Jack");
    std::string target = "Claptrap";


    robot.rangedAttack(target);
    robot.meleeAttack(target);
    robot.takeDamage(40);
    robot.beRepaired(10);

    robot.vaulthunter_dot_exe(target);
    robot.vaulthunter_dot_exe(target);
    robot.vaulthunter_dot_exe(target);
    robot.vaulthunter_dot_exe(target);
    robot.vaulthunter_dot_exe(target);
    robot.vaulthunter_dot_exe(target);
    robot.vaulthunter_dot_exe(target);
    robot.vaulthunter_dot_exe(target);

    return (0);
}
