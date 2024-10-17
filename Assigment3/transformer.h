#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include <iostream>
class Transformer {
public:
    bool pickup();
    bool fire();
    bool run();
    uint getMS();
    void setMS(uint MS);
    uint getIS();
    void setIS(uint IS);
    uint getEnergy();
    void setEnergy(uint energy);
    uint getFuel();
    void setFuel(uint fuel);
    uint getAmmo();
    void setAmmo(uint ammo);
private:
    uint _movespeed;
    uint _inventoryslots;
    uint _energy;
    uint _fuel;
    uint _ammo;
};

#endif
