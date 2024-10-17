#include "transformer.h"

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
