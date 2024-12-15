/* Artem Churilov st130184@student.spbu.ru
   4 task "Overload"
*/

#include "decepticon.h"

Decepticon::Decepticon(uint reMS, uint reIS):Transformer(reMS, reIS)            
{
    std::cout << "Decepticon with minimal fuel and energy created" << std::endl;
    std::cout << std::endl << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << std::endl << std::endl;
};

Decepticon::Decepticon(uint reMS, uint reIS, uint reFuel, uint reEnergy):Transformer(reMS, reIS, reFuel, reEnergy)
{
};

Decepticon::~Decepticon()
{
};

bool Decepticon::transform()
{
    std::cout << "Decepticon transformed"<<std::endl;
    std::cout<<std::endl<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<std::endl<<std::endl;
    return true;
};

uint Decepticon::getRank()
{
    return _rank;
};

void Decepticon::setRank(uint reRank)
{
    _rank = reRank;
};

std::string Decepticon::getScheme()
{
    return _scheme;
};


void Decepticon::setScheme(std::string reScheme)
{
    _scheme = reScheme;
};

int Decepticon::getAttacklvl()
{
    return _attacklvl;
};

void Decepticon::setAttacklvl(int reAttacklvl)
{
    _attacklvl = reAttacklvl;
};


bool operator==(const Decepticon& lhs, const Decepticon& rhs) {
    return (lhs._attacklvl) == (rhs._attacklvl);
}

bool operator<(const Decepticon& lhs, const Decepticon& rhs) {
    return (lhs._attacklvl) < (rhs._attacklvl);
}

bool operator>(const Decepticon& lhs, const Decepticon& rhs) {
    return rhs < lhs;
}

bool operator!=(const Decepticon& lhs, const Decepticon& rhs) {
    return !(lhs == rhs);
}

bool operator<=(const Decepticon& lhs, const Decepticon& rhs) {
    return !(rhs < lhs); 
}

bool operator>=(const Decepticon& lhs, const Decepticon& rhs) {
    return !(lhs < rhs); 
}

std::ostream& operator<<(std::ostream& os, const Decepticon& decepticon) {
    os << "Decepticon Info:\n"
       << "Move Speed: " << decepticon._movespeed << "\n"
       << "Inventory Slots: " << decepticon._inventoryslots << "\n"
       << "Fuel: " << decepticon._fuel << "\n"
       << "Energy: " << decepticon._energy << "\n"
       << "Attack: " << decepticon._attacklvl << "\n"
       <<std::endl<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<std::endl<<std::endl;
    return os; 
}

