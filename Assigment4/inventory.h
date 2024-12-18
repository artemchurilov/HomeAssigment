/* Artem Churilov st130184@student.spbu.ru
   4 task "Overload"
*/

#ifndef INVENTORY_H
#define INVENTORY_H

#include <iostream>

class Inventory
{
public:
    Inventory();
    Inventory(uint size);
    ~Inventory();
    void addItem(int index, int item);
    void displayItems();
    int getItem(int index);
private:
    int* inv;
    int size;
};

#endif

