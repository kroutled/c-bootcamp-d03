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

FragTrap::FragTrap( std::string name ) : _maxHitPoints(100), _maxEnergyPoints(100),
         _level(1), _meleeAttackDmg(30),_rangedAttackDmg(20), _armorDmgReduction(5)
{
    std::cout << "Commencing directive three! Uhntssuhntssuhntss--" << std::endl;
    _name = name;
    _hitPoints = _maxEnergyPoints;
    _energyPoints = _maxEnergyPoints;
    return;
}
FragTrap::~FragTrap( void )
{
    std::cout << "I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
    return;
}

void    FragTrap::rangedAttack(std::string const & target)
{
    std::cout << this->_name << " attacks " << target << " at range, causing " << this->_rangedAttackDmg << " points of damage !" << std::endl;
}

void    FragTrap::meleeAttack(std::string const & target)
{
    std::cout << this->_name << " attacks " << target << " with a melee move, causing " << this->_meleeAttackDmg << " points of damage !" << std::endl;
}

void    FragTrap::takeDamage(unsigned int amount)
{
    int taken   = amount - _armorDmgReduction;

    if (taken < 0)
        taken = 0;

    if(taken > _hitPoints)
    {
        _hitPoints = 0;
        std::cout << _name << " has taken: " << taken <<" damage and has died!" << std::endl;
    }
    else
    {
        _hitPoints -= taken;
        std::cout << _name << " has taken a total damage of:" << taken << " after his armor protected him and now has health of: " << _hitPoints << std::endl;
    }
    
}

void    FragTrap::beRepaired(unsigned int amount)
{
    int healed = amount + _hitPoints;

    if (_hitPoints == 0)
    {
        std::cout << _name << " could not be healed as they are dead :(" << std::endl;
    }
    else if (_hitPoints > 0 && healed >= _maxHitPoints)
    {
        _hitPoints = _maxHitPoints;
        std::cout << _name << " has been healed for: " << amount << " and has " << _hitPoints << " hit points" << std::endl;
    }
    else
    {
        _hitPoints += amount;
        std::cout << _name << " has been healed jjgjg for: " << amount << " and has " << _hitPoints << " hit points" << std::endl;
    }

}

FragTrap &FragTrap::operator=(FragTrap const &rhs)
{
    this->_hitPoints = rhs._hitPoints;
    this->_energyPoints = rhs._energyPoints;
    this->_level = rhs._level;
    this->_name = rhs._name;
    this->_meleeAttackDmg = rhs._meleeAttackDmg;
    this->_rangedAttackDmg = rhs._rangedAttackDmg;
    this->_armorDmgReduction = rhs._armorDmgReduction;

    return *this;
}

FragTrap::FragTrap( FragTrap const &src )
{
    std::cout << "A copy constructor was called!" << std::endl;
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
