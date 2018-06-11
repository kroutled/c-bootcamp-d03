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
#include "FragTrap.hpp"

ScavTrap::ScavTrap(std::string  name) : _name(name), _maxHitPoints(100), _maxEnergyPoints(50),
         _level(1), _meleeAttackDmg(20),_rangedAttackDmg(15), _armorDmgReduction(3)
{
    std::cout << "Booting sequence complete. Hello! I am your new steward bot." << std::endl;
    _energyPoints = _maxEnergyPoints;
    _hitPoints = _maxHitPoints;
    return;
}

ScavTrap::ScavTrap( ScavTrap const &src )
{
    std::cout << "A copy constructor was called!" << std::endl;
    *this = src;
    return;
}

ScavTrap::~ScavTrap( void )
{
    std::cout << "What is it Angel?" << std::endl;
    return;
}

void    ScavTrap::rangedAttack( std::string const &target )
{
    std::cout << "Oh my goodness!... " << target << " just got nailed by a ranged attack from " << _name << " and took " <<_rangedAttackDmg << " damage!" << std::endl;
}

void    ScavTrap::meleeAttack( std::string const &target )
{
    std::cout << "Daaaayum, it would appear " << target << " has taken a melee attack this time!...thats around " << _meleeAttackDmg << " damage!" << std::endl;
}

void    ScavTrap::takeDamage( unsigned int amount )
{
    int taken   = amount - _armorDmgReduction;

    if (taken < 0)
        taken = 0;

    if(taken > _hitPoints)
    {
        _hitPoints = 0;
        std::cout << taken << "damage was done to " << _name << " and they died! :(" << std::endl;
    }
    else
    {
        _hitPoints -= taken;
        std::cout << _name << " took a knock! I think maybe like " << taken << " damage was done? His armor protected him abit so he should have " << _hitPoints << " hitpoints left" << std::endl;
    }
}

void    ScavTrap::beRepaired( unsigned int amount )
{
        int healed = amount + _hitPoints;

    if (_hitPoints == 0)
    {
        std::cout << "We've lost " << _name << ", no amount of healing his body will bring him back!" << std::endl;
    }
    else if (_hitPoints > 0 && healed >= _maxHitPoints)
    {
        _hitPoints = _maxHitPoints;
        std::cout << "Nice! that heal of " << amount << "will take " << _name << " to " << _hitPoints << " hit points" << std::endl;
    }
    else
    {
        _hitPoints += amount;
        std::cout << _name << " has been healed jjgjg for: " << amount << " and has " << _hitPoints << " hit points" << std::endl;
    }
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
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

void    ScavTrap::challengeNewcomer( void )
{
    std::string     challenges[5] = {"beer drinking challenge", "baby throwing challenge", "breath holding challenge...wait we're robots :(", "beep making challenge", "tickle challenge"};
    int             i = 0;

    i = rand() % 5;
    std::cout << "ah oh...looks like " << _name << " has challenged you to a " << challenges[i] << ", how do you respond?" << std::endl;
}
