/* Artem Churilov st130184@student.spbu.ru
   4 task "Overload"
*/

#ifndef TRANSFORMER_H
#define TRANSFORMER_H
#include "inventory.h"
#include <iostream>

class Transformer
{
public:
    Transformer();
    Transformer(uint reMS, uint reIS, uint reFuel, uint reEnergy);
    Transformer(uint reMS, uint reIS);

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

    friend bool operator==(const Transformer& lhs, const Transformer& rhs);
    friend bool operator!=(const Transformer& lhs, const Transformer& rhs);
    friend bool operator<(const Transformer& lhs, const Transformer& rhs);
    friend bool operator>(const Transformer& lhs, const Transformer& rhs);
    friend bool operator<=(const Transformer& lhs, const Transformer& rhs);
    friend bool operator>=(const Transformer& lhs, const Transformer& rhs);
    friend std::ostream& operator<<(std::ostream& os, const Transformer& transformer);

    ~Transformer();
protected:
    Inventory* Tinventory;

    uint _movespeed;
    uint _inventoryslots;
    uint _fuel;
    uint _energy;
    uint _ammo;
};

#endif
