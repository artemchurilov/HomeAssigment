/* Artem Churilov st130184@student.spbu.ru
   3 task "Class Transformer"
*/

#include "autobot.h"
Autobot::Autobot(uint reMS, uint reIS, uint reFuel, uint reEnergy):Transformer(reMS, reIS, reFuel, reEnergy)
{
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

