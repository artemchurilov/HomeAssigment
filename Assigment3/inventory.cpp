#include "inventory.h"
#include "transformer.h"

Inventory::Inventory()
{
};
Inventory::Inventory(uint maxsize)
{
    std::string* buffer = new std::string[maxsize];
    std::cin>>buffer[0];
    std::cout<<buffer[0]<<std::endl;
};

Inventory::~Inventory()
{
   delete [] buffer;
};

void Inventory::check(){

};

