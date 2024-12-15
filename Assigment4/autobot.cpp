/* Artem Churilov st130184@student.spbu.ru
   4 task "Overload"
*/

#include "autobot.h"
Autobot::Autobot(uint reMS, uint reIS, uint reFuel, uint reEnergy):Transformer(reMS, reIS, reFuel, reEnergy)
{
};

Autobot::Autobot(uint reMS, uint reIS):Transformer(reMS, reIS)            
{
    std::cout << "Autobot with minimal fuel and energy created" << std::endl;
    std::cout << std::endl << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << std::endl << std::endl;
};
Autobot::~Autobot()
{
};

bool Autobot::transform()
{
    std::cout << "Autobot transformed"<<std::endl;
    std::cout<<std::endl<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<std::endl<<std::endl;
    return true;
};

uint Autobot::getRep()
{
    return _reputation;
};

void Autobot::setRep(uint reRep)
{
    _reputation = reRep;
};

std::string Autobot::getMis()
{
    return _mission;
};

void Autobot::setMis(std::string reMis)
{
    _mission = reMis;
};

int Autobot::getShieldlvl()
{
    return _shieldlvl;
};

void Autobot::setShieldlvl(int reShieldlvl)
{
    _shieldlvl = reShieldlvl;
};

bool operator==(const Autobot& lhs, const Autobot& rhs) {
    return (lhs._shieldlvl) == (rhs._shieldlvl);
}

bool operator<(const Autobot& lhs, const Autobot& rhs) {
    return (lhs._shieldlvl) < (rhs._shieldlvl);
}

bool operator>(const Autobot& lhs, const Autobot& rhs) {
    return rhs < lhs;
}

bool operator!=(const Autobot& lhs, const Autobot& rhs) {
    return !(lhs == rhs);
}

bool operator<=(const Autobot& lhs, const Autobot& rhs) {
    return !(rhs < lhs); 
}

bool operator>=(const Autobot& lhs, const Autobot& rhs) {
    return !(lhs < rhs); 
}

std::ostream& operator<<(std::ostream& os, const Autobot& autobot) {
    os << "Autobot Info:\n"
       << "Move Speed: " << autobot._movespeed << "\n"
       << "Inventory Slots: " << autobot._inventoryslots << "\n"
       << "Fuel: " << autobot._fuel << "\n"
       << "Energy: " << autobot._energy << "\n"
       << "Shield: " << autobot._shieldlvl << "\n"
       <<std::endl<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<std::endl<<std::endl;
    return os; 
}

