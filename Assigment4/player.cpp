/* Artem Churilov st130184@student.spbu.ru
   3 task "Class Transformer"
*/

#include "player.h"

Player::Player(uint reMS, uint reIS, uint reFuel, uint reEnergy, std::string reName):Transformer(reMS, reIS, reFuel, reEnergy)
{
    _name = reName;
};

Player::~Player()
{
};

bool Player::fire() 
{
    std::cout << _name << " doesn't know how to fire" << std::endl;
    std::cout<<std::endl<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<std::endl<<std::endl;
    return false;
};

bool Player::transform()
{
    std::cout << _name<<" transformed"<<std::endl;
    std::cout<<std::endl<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<std::endl<<std::endl;
    return true;
};

uint Player::getKills()
{
    return _kills;
};
void Player::setKills(uint reKills)
{
    _kills = reKills;
};

std::string Player::getName()
{
    return _name;
};
void Player::setName(std::string reName)
{
    _name = reName;
};

int Player::getShieldlvl()
{
    return _shieldlvl;
};
void Player::setShieldlvl(int reShieldlvl)
{
    _shieldlvl = reShieldlvl;
};
