#include <iostream>
#include "transformer.h"
#include "create.h"
#include "inventory.h"

int main()
{
    uint reMS, reIS, reFuel, reEnergy;
    uint temp;
    create(reMS, reIS, reFuel, reEnergy);
    if(reMS+reIS+reFuel+reEnergy==10)
    {
        std::cout<<std::endl;
    	Transformer bot(reMS, reIS, reFuel, reEnergy);
    	temp=bot.getMS();
    	std::cout<<"Movespeed: "<<temp<<std::endl;
    	temp=bot.getIS();
   	std::cout<<"Inventory slots: "<<temp<<std::endl;
    	temp=bot.getFuel();
    	std::cout<<"Fuel: "<<temp<<std::endl;
    	temp=bot.getEnergy();
    	std::cout<<"Energy: "<<temp<<std::endl;
    	bot.fire();
    	bot.pickup();
    	bot.pickup();
	bot.pickup();



    }
}




