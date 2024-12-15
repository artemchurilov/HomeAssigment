/* Artem Churilov st130184@student.spbu.ru
   4 task "Overload"
*/

#ifndef DECEPTICON_H
#define DECEPTICON_H
#include "transformer.h"
class Decepticon: public Transformer 
{
public:
    Decepticon(uint reMS, uint reIS, uint reFuel, uint reEnergy);
    ~Decepticon();
    uint getRank();
    void setRank(uint reRank);
    std::string getScheme();
    void setScheme(std::string reScheme);
    int getAttacklvl();
    void setAttacklvl(int reAttacklvl);
    bool transform();
    friend bool operator==(const Decepticon& lhs, const Decepticon& rhs);
    friend bool operator!=(const Decepticon& lhs, const Decepticon& rhs);
    friend bool operator<(const Decepticon& lhs, const Decepticon& rhs);
    friend bool operator>(const Decepticon& lhs, const Decepticon& rhs);
    friend bool operator<=(const Decepticon& lhs, const Decepticon& rhs);
    friend bool operator>=(const Decepticon& lhs, const Decepticon& rhs);
private:
    uint _rank;
    std::string _scheme;
    int _attacklvl;
};

#endif
