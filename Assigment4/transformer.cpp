/* Artem Churilov st130184@student.spbu.ru
   4 task "Overload"
*/

#include "transformer.h"
#include "inventory.h"

Transformer::Transformer()
{
    Tinventory = new Inventory();
};

Transformer::~Transformer()
{
    delete Tinventory;
};

Transformer::Transformer(uint reMS, uint reIS, uint reFuel, uint reEnergy)
    : Tinventory(new Inventory(reIS)),
      _movespeed(reMS),                 
      _inventoryslots(reIS),            
      _fuel(reFuel),                    
      _energy(reEnergy)                 
{
    std::cout << "Special transformer created" << std::endl;
    std::cout << std::endl << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << std::endl << std::endl;
}



void Transformer::useInventory() 
{
    Tinventory->displayItems();
};

void Transformer::addItemToInv(int index, int item)
{
    Tinventory->addItem(index,item);
};

bool Transformer::fire()
{
    _ammo--;
    std::cout<<"Fired"<<std::endl;
    std::cout<<std::endl<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<std::endl<<std::endl;
    return true;
};

uint Transformer::getMS()
{
    return _movespeed;
};


void Transformer::setMS(uint MS)
{
    _movespeed = MS;
};

uint Transformer::getIS()
{
    return _inventoryslots;
};

void Transformer::setIS(uint IS)
{
    _inventoryslots = IS;
};

uint Transformer::getEnergy()
{
    return _energy;
};

void Transformer::setEnergy(uint energy)
{
    _energy = energy;
};


uint Transformer::getFuel()
{
    return _fuel;
};

void Transformer::setFuel(uint fuel)
{
    _fuel = fuel;
};

uint Transformer::getAmmo()
{
    return _ammo;
};

void Transformer::setAmmo(uint ammo)
{
    _ammo = ammo;
};

bool operator==(const Transformer& lhs, const Transformer& rhs) {
    return (lhs._movespeed) == (rhs._movespeed);
}

bool operator<(const Transformer& lhs, const Transformer& rhs) {
    return (lhs._movespeed) < (rhs._movespeed);
}

bool operator>(const Transformer& lhs, const Transformer& rhs) {
    return rhs < lhs;
}

bool operator!=(const Transformer& lhs, const Transformer& rhs) {
    return !(lhs == rhs);
}

bool operator<=(const Transformer& lhs, const Transformer& rhs) {
    return !(rhs < lhs); 
}

bool operator>=(const Transformer& lhs, const Transformer& rhs) {
    return !(lhs < rhs); 
}

