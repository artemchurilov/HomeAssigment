#include <iostream>
#include "transformer.h"
int main()
{
    std::cout<<"Test message"<<std::endl;
    Transformer bot;
    bot.fire();
    bot.pickup();
    uint a = bot.getMS();
    std::cout<<"Transformer's move speed is "<<a<<std::endl;
}
