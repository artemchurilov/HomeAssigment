/* Artem Churilov st130184@student.spbu.ru
   3 task "Class Transformer"
*/

#include <iostream>
#include "transformer.h"
#include "create.h"
#include "inventory.h"
#include "battleground.h"
#include "autobot.h"
#include "decepticon.h"
#include "player.h"

int main()
{
    uint reMS, reIS, reFuel, reEnergy;
    std::string reName;
    create(reMS, reIS, reFuel, reEnergy, reName);
    if(reMS+reIS+reFuel+reEnergy==10)
    {
        std::cout<<std::endl;
    	Player bot1(reMS, reIS, reFuel, reEnergy, reName);
	Autobot bot2(1,1,1,7);
        Decepticon bot3(2,3,2,3);
        Decepticon bot4(3,2,4,1);
	
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
        bot1.transform();
        bot2.transform();
        bot3.transform();
        bot4.transform();
        bot1.fire();
        bot2.fire();
        bot3.fire();
        std::string yourname=bot1.getName();
        secondlocation.listBG();
        firstlocation.listBG();
    }
}




