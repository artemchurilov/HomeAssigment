/* Artem Churilov st130184@student.spbu.ru
   4 task "Overload"
*/

#include "player.h"

Player::Player(uint reMS, uint reIS, std::string reName):Transformer(reMS, reIS)
{
    _name = reName;
};

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


bool operator==(const Player& lhs, const Player& rhs)
{
    return (lhs._shieldlvl) == (rhs._shieldlvl);
}

bool operator<(const Player& lhs, const Player& rhs)
{
    return (lhs._shieldlvl) < (rhs._shieldlvl);
}

bool operator>(const Player& lhs, const Player& rhs)
{
    return rhs < lhs;
}

bool operator!=(const Player& lhs, const Player& rhs)
{
    return !(lhs == rhs);
}

bool operator<=(const Player& lhs, const Player& rhs)
{
    return !(rhs < lhs);
}

bool operator>=(const Player& lhs, const Player& rhs)
{
    return !(lhs < rhs);
}

std::ostream& operator<<(std::ostream& os, const Player& player)
{
    os << "Player Info:\n"
       << "Name: " << player._name << "\n"
       << "Move Speed: " << player._movespeed << "\n"
       << "Inventory Slots: " << player._inventoryslots << "\n"
       << "Fuel: " << player._fuel << "\n"
       << "Energy: " << player._energy << "\n"
       << "Shield: " << player._shieldlvl << "\n"
       <<std::endl<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<std::endl<<std::endl;
    return os;
}

