/* Artem Churilov st130184@student.spbu.ru
   4 task "Overload"
*/

#ifndef PLAYER_H
#define PLAYER_H
#include "transformer.h"
class Player: public Transformer 
{
public:
    Player(uint reMS, uint reIS, uint reFuel, uint reEnergy, std::string reName);
    ~Player();
    uint getKills();
    void setKills(uint reKills);
    std::string getName();
    void setName(std::string reName);
    int getShieldlvl();
    void setShieldlvl(int reShieldlvl);
    bool transform();
    bool fire() override;
    friend bool operator==(const Player& lhs, const Player& rhs);
    friend bool operator!=(const Player& lhs, const Player& rhs);
    friend bool operator<(const Player& lhs, const Player& rhs);
    friend bool operator>(const Player& lhs, const Player& rhs);
    friend bool operator<=(const Player& lhs, const Player& rhs);
    friend bool operator>=(const Player& lhs, const Player& rhs);
private:
    uint _kills;
    std::string _name;
    int _shieldlvl;
};

#endif
