/* Artem Churilov st130184@student.spbu.ru
   4 task "Overload"
*/

#include "battleground.h"
#include "transformer.h"

Battleground::Battleground(std::string nameBG):nameBG(nameBG)
{
    count = 0;
    for(int i=0; i<4; ++i)
    {
        arr[i] = new Transformer();
    }
};

Battleground::~Battleground()
{
    std::cout<<"Battleground " <<nameBG<<" destroyed"<<std::endl;
    std::cout<<std::endl<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<std::endl<<std::endl;
    for(int i=0; i<4; ++i)
    {
        arr[i]=nullptr;
    }

};

void Battleground::addTransformer(Transformer* transformer)
{
    if(count<4)
    {
        arr[count++]=transformer;
        std::cout <<"Transformer added." << std::endl;
        std::cout<<std::endl<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<std::endl<<std::endl;
    }
    else
    {
        std::cout << "Not enough place!" << std::endl;
        std::cout<<std::endl<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<std::endl<<std::endl;
    }
};

void Battleground::removeTransformer(int index)
{
    if (index >= 0 and index < count)
    {
        arr[index] = nullptr;
        for (int i = index; i < count - 1; ++i)
        {
            arr[i] = arr[i + 1];
        }
        arr[--count] = nullptr;
        std::cout << "Transformer removed." << std::endl;
        std::cout<<std::endl<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<std::endl<<std::endl;
    }
}

void Battleground::listBG()
{
    for (int i = 0; i < count; ++i)
    {
        std::cout << "Transformer " << i+1 <<" on Battleground -- " << nameBG<<", with his inventory: "<<std::endl;
        arr[i]->useInventory();
        std::cout << std::endl;
    }
    std::cout<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<std::endl<<std::endl;
};
