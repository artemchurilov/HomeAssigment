/* Artem Churilov st130184@student.spbu.ru
   3 task "Class Transformer"
*/

#include "inventory.h"
#include "transformer.h"

Inventory::Inventory()
{
    inv = new int[1];
    inv[0] = 0;
};
Inventory::Inventory(uint size):size(size)
{
    inv = new int[size];
    for (int i=0; i<int(size); ++i){inv[i]=0;}
    std::cout << "Inventory with " << size << " slot(s) created."<<std::endl;
    std::cout<<std::endl<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<std::endl<<std::endl;
};

Inventory::~Inventory()
{
    std::cout << "Inventory destoryed"<<std::endl;
    std::cout<<std::endl<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<std::endl<<std::endl;
    delete[] inv;
};

void Inventory::displayItems() 
{
    for (int i = 0; i < int(size); ++i) {
        std::cout<<"Item["<<i+1<<"]: " <<inv[i]<<std::endl;
    }
};

void Inventory::addItem(int index, int item)
{
    if (index >= 0 and index<size)
    {
        inv[index] = item;
    }
};

int Inventory::getItem(int index)
{
    if (index >= 0 and index<size)
    {
        return inv[index];
    }
    return -1;
};
