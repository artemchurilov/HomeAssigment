#ifndef FUNC_H
#define FUNC_H

#include <iostream>

class Inventory{
public:
    Inventory();
    Inventory(uint maxsize);
    ~Inventory();
    void check();
private:
    std::string* buffer;
};


#endif

