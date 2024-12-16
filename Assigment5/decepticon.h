/* Artem Churilov st130184@student.spbu.ru
   5 task "Virtual&Vector"
*/

#ifndef DECEPTICON_H
#define DECEPTICON_H
#include "transformer.h"
class Decepticon: public Transformer
{
public:
    Decepticon(uint reMS, uint reIS, uint reFuel, uint reEnergy);
    Decepticon(uint reMS, uint reIS);
    ~Decepticon();
    uint getRank();
    void setRank(uint reRank);
    std::string getScheme();
    void setScheme(std::string reScheme);
    int getAttacklvl();
    void setAttacklvl(int reAttacklvl);
    bool transform();
    bool jump() override;
    bool megaAttack() override;
    bool blast() override;
    friend bool operator==(const Decepticon& lhs, const Decepticon& rhs);
    friend bool operator!=(const Decepticon& lhs, const Decepticon& rhs);
    friend bool operator<(const Decepticon& lhs, const Decepticon& rhs);
    friend bool operator>(const Decepticon& lhs, const Decepticon& rhs);
    friend bool operator<=(const Decepticon& lhs, const Decepticon& rhs);
    friend bool operator>=(const Decepticon& lhs, const Decepticon& rhs);
    friend std::ostream& operator<<(std::ostream& os, const Decepticon& decepticon);
private:
    uint _rank;
    std::string _scheme;
    int _attacklvl;
};

#endif
