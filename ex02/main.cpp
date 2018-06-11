#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int     main(void)
{
        srand(time(NULL));

    ClapTrap clap = ClapTrap("ted");
    FragTrap robot = FragTrap("Jack the Frag");
    ScavTrap freshbot = ScavTrap("Trevor the Scav");
    std::string target = "Claptrap";
    std::string target2 = "Jimbotrap";


    robot.rangedAttack(target);
    robot.meleeAttack(target);
    robot.takeDamage(40);
    robot.beRepaired(10);

    freshbot.rangedAttack(target2);
    freshbot.meleeAttack(target2);
    freshbot.takeDamage(30);
    freshbot.beRepaired(25);

    robot.vaulthunter_dot_exe(target);
    robot.vaulthunter_dot_exe(target);
    robot.vaulthunter_dot_exe(target);
    robot.vaulthunter_dot_exe(target);
    robot.vaulthunter_dot_exe(target);
    robot.vaulthunter_dot_exe(target);
    robot.vaulthunter_dot_exe(target);
    robot.vaulthunter_dot_exe(target);

    freshbot.challengeNewcomer();
    freshbot.challengeNewcomer();
    freshbot.challengeNewcomer();
    freshbot.challengeNewcomer();
    freshbot.challengeNewcomer();
    freshbot.challengeNewcomer();

    return (0);
}