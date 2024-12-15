/* Artem Churilov st130184@student.spbu.ru
   4 task "Overload"
*/

#ifndef AUTOBOT_H
#define AUTOBOT_H
#include "transformer.h"
class Autobot: public Transformer
{
public:
    Autobot(uint reMS, uint reIS, uint reFuel, uint reEnergy);
    Autobot(uint reMS, uint reIS);
    ~Autobot();
    uint getRep();
    void setRep(uint reRep);
    std::string getMis();
    void setMis(std::string reMis);
    int getShieldlvl();
    void setShieldlvl(int reShieldlvl);
    bool transform();

    friend bool operator==(const Autobot& lhs, const Autobot& rhs);
    friend bool operator!=(const Autobot& lhs, const Autobot& rhs);
    friend bool operator<(const Autobot& lhs, const Autobot& rhs);
    friend bool operator>(const Autobot& lhs, const Autobot& rhs);
    friend bool operator<=(const Autobot& lhs, const Autobot& rhs);
    friend bool operator>=(const Autobot& lhs, const Autobot& rhs);
    friend std::ostream& operator<<(std::ostream& os, const Autobot& autobot);
private:
    uint _reputation;
    std::string _mission;
    int _shieldlvl;
};

#endif
