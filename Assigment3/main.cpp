#include <iostream>
#include "transformer.h"
#include "create.h"
#include "inventory.h"
#include "battleground.h"

int main()
{
    uint reMS, reIS, reFuel, reEnergy;
    uint temp;
    create(reMS, reIS, reFuel, reEnergy);
    if(reMS+reIS+reFuel+reEnergy==10)
    {
        std::cout<<std::endl;
    	Transformer bot1(reMS, reIS, reFuel, reEnergy);
	Transformer bot2(1,1,1,7);
        Transformer bot3(2,3,2,3);
        Transformer bot4(3,2,4,1);
	
	Battleground firstlocation("Earth");
	firstlocation.addTransformer(&bot1);
	firstlocation.addTransformer(&bot2);
	firstlocation.addTransformer(&bot3);
	firstlocation.addTransformer(&bot4);
	firstlocation.listBG();
	
	firstlocation.removeTransformer(0);
	firstlocation.listBG();
	
	Battleground secondlocation("Moon");
	secondlocation.addTransformer(&bot1);
	secondlocation.listBG();
        bot1.addItemToInv(1,1);
        bot2.addItemToInv(0,4);
        secondlocation.listBG();
        firstlocation.listBG();
    }
}




