/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kroutled <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 10:01:03 by kroutled          #+#    #+#             */
/*   Updated: 2018/06/08 10:01:04 by kroutled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ) :  _maxHitPoints(0), _maxEnergyPoints(0),
         _level(0), _meleeAttackDmg(0),_rangedAttackDmg(0), _armorDmgReduction(0), _name(name)
{
    std::cout << "ClapTrap constructor default" << std::endl;
    return;
}

ClapTrap::ClapTrap( std::string name, int _hitPoints, int _maxHitPoints, int _energyPoints, int _maxEnergyPoints,
 int _level, int meleeAttackDmg, int _rangedAttackDmg, int _armorDmgReduction  ) : 
  _maxHitPoints(_maxHitPoints), _maxEnergyPoints(_maxEnergyPoints), _level(_level), _meleeAttackDmg(meleeAttackDmg),
  _rangedAttackDmg(_rangedAttackDmg), _armorDmgReduction(_armorDmgReduction),  _name(name), _hitPoints(_hitPoints), _energyPoints(_energyPoints)
{
    std::cout << "ClapTrap constructor setup" << std::endl;
    return;
}

ClapTrap::~ClapTrap ( void )
{
    std::cout << "ClapTrap is gone" << std::endl;
    return;
}

ClapTrap::ClapTrap  (ClapTrap const &src)
{
    *this = src;
    return;
}

ClapTrap    &ClapTrap::operator=(ClapTrap const &rhs)
{
    this->_name = rhs._name;
    this->_hitPoints = rhs._hitPoints;
    this->_maxHitPoints = rhs._maxHitPoints;
    this->_energyPoints = rhs._energyPoints;
    this->_maxEnergyPoints = rhs._maxEnergyPoints;
    this->_level = rhs._level;
    this->_meleeAttackDmg = rhs._meleeAttackDmg;
    this->_rangedAttackDmg = rhs._rangedAttackDmg;
    this->_armorDmgReduction = rhs._armorDmgReduction;

    return (*this);
}

void    ClapTrap::rangedAttack(std::string const &target)
{
    std::cout << "ClapTrap ranged attack done by " << this->_name << " has hit " << target << " for "<< this->_rangedAttackDmg << " damage!"<< std::endl;
}

void    ClapTrap::meleeAttack(std::string const &target)
{
    std::cout << "ClapTrap melee attack done by " << this->_name << " to " << target << " for "<< this->_rangedAttackDmg << " damage!"<< std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
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

void    ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "" << std::endl;
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