/* Artem Churilov st130184@student.spbu.ru
   3 task "Class Transformer"
*/

#ifndef TRANSFORMER_H
#define TRANSFORMER_H
#include "inventory.h"
#include <iostream>

class Transformer {
public:
    Transformer();
    Transformer(uint reMS, uint reIS, uint reFuel, uint reEnergy);

    virtual bool fire();
    bool run();
    void useInventory();
    void addItemToInv(int index, int item);
    std::string getName();

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

    ~Transformer();
protected:
    Inventory* Tinventory;

    uint _movespeed;
    uint _inventoryslots;
    uint _energy;
    uint _fuel;
    uint _ammo;
};

#endif


