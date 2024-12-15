/* Artem Churilov st130184@student.spbu.ru
   3 task "Class Transformer"
*/

#include "decepticon.h"

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

