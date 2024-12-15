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
    	Transformer bot2(1,1,1,7);
    	Autobot bot3(1,4,1,4);
    	Autobot bot4(2,2,3,3);
        if (bot3<bot4){std::cout<<"Your transformer is slower((("<<std::endl;}
        if (bot1>bot2){std::cout<<"Your transformer is faster!"<<std::endl;}
        if (bot1==bot2){std::cout<<"Draw!"<<std::endl;}
        if (bot1<=bot2){std::cout<<"Your transformer is slower (or the same)"<<std::endl;}
        if (bot1>=bot2){std::cout<<"Your transformer is faster (or the same)"<<std::endl;}
        
    }
}




