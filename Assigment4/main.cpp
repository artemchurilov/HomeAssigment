/* Artem Churilov st130184@student.spbu.ru
   4 task "Overload"
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
    	Decepticon bot5(1,2,3,4);
        if (bot3<bot4){std::cout<<"Your transformer is slower((("<<std::endl
       <<std::endl<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<std::endl<<std::endl;}
        if (bot1>bot2){std::cout<<"Your transformer is faster!"<<std::endl
       <<std::endl<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<std::endl<<std::endl;}
        if (bot1==bot2){std::cout<<"Draw!"<<std::endl
       <<std::endl<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<std::endl<<std::endl;}
        if (bot1<=bot2){std::cout<<"Your transformer is slower (or the same)"<<std::endl
       <<std::endl<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<std::endl<<std::endl;}
        if (bot1>=bot2){std::cout<<"Your transformer is faster (or the same)"<<std::endl
       <<std::endl<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<std::endl<<std::endl;}
        bot1.setShieldlvl(10005);
        bot3.setShieldlvl(5);
        bot5.setAttacklvl(6);
        std::cout<<bot1;
        std::cout<<bot2;
        std::cout<<bot3;
        std::cout<<bot5;
        
    }
}




