#include "transformer.h"
#include "inventory.h"

Transformer::Transformer()
{

};
Transformer::~Transformer()
{

};

Transformer::Transformer(uint reMS, uint reIS, uint reFuel, uint reEnergy):Tinventory(reIS)
{
    std::cout<<"created"<<std::endl;
    setMS(reMS);
    setIS(reIS);
    setFuel(reFuel);
    setEnergy(reEnergy);
};

bool Transformer::fire()
{
    _ammo--;
    std::cout<<"Fired"<<std::endl;
    return true;
};

bool Transformer::pickup()
{
     if (_inventoryslots>0 and _energy>0)
     {
         _inventoryslots--;
         _energy--;
         std::cout<<"You picked up an item"<<std::endl;
         return true;
     }
     else
     {
         std::cout<<"You cannot pick up items now"<<std::endl;
         return false;
     }
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


