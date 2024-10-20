#ifndef FUNC_H
#define FUNC_H

#include <iostream>

class Inventory{
public:
    Inventory();
    Inventory(uint size);
    ~Inventory();
    void addItem(int index, int item);
    void displayItems();
private:
    int* inv;
    int size;
    
};


#endif

