#ifndef BATTLEGROUND_H
#define BATTLEGROUND_H
#include <iostream>

#include "transformer.h"

class Battleground
{
public:
    Battleground(std::string nameBG);
    ~Battleground();
    void addTransformer(Transformer* transformer);
    void list();
    void removeTransformer(int index);
    void listBG();
private:
    int count;
    int top;
    std::string nameBG;
    Transformer* arr[4];
};
#endif
