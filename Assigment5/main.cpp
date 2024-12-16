/* Artem Churilov st130184@student.spbu.ru
  5 task "Virtual&Vector"
*/

#include <iostream>
#include "transformer.h"
#include "create.h"
#include "inventory.h"
#include "battleground.h"
#include "autobot.h"
#include "decepticon.h"
#include "player.h"
#include <vector>

int main()
{
    uint reMS, reIS, reFuel, reEnergy;
    std::string reName;
    create(reMS, reIS, reFuel, reEnergy, reName);
    if(reMS+reIS+reFuel+reEnergy==10)
    {
        std::cout<<std::endl;
        Player bot1(reMS, reIS, reFuel, reEnergy, reName);
        Transformer t1(4,4);
        Transformer t2(6,2);
        Transformer t3(2,6);
        Autobot a1(5,3);
        Autobot a2(2,2,3,3);
        Autobot a3(2,3,3,2);
        Decepticon d1(6,2);
        Decepticon d2(4,4);
        Decepticon d3(6,1,1,1);
        if (bot1<a2)
        {
            std::cout<<"Your transformer is slower((("<<std::endl
                     <<std::endl<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<std::endl<<std::endl;
        }
        if (bot1>d1)
        {
            std::cout<<"Your transformer is faster!"<<std::endl
                     <<std::endl<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<std::endl<<std::endl;
        }
        if (bot1==t2)
        {
            std::cout<<"Draw!"<<std::endl
                     <<std::endl<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<std::endl<<std::endl;
        }
        if (bot1<=t2)
        {
            std::cout<<"Your transformer is slower (or the same)"<<std::endl
                     <<std::endl<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<std::endl<<std::endl;
        }
        if (bot1>=t2)
        {
            std::cout<<"Your transformer is faster (or the same)"<<std::endl
                     <<std::endl<<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<std::endl<<std::endl;
        }
        bot1.setShieldlvl(10005);
        a1.setShieldlvl(5);
        d1.setAttacklvl(6);
        std::cout<<bot1;
        std::cout<<a1;
        std::cout<<d1;
        std::cout<<t1;

        t1.jump();
        t1.megaAttack();
        t1.blast();
        a1.jump();
        a1.megaAttack();
        a1.blast();
        d1.jump();
        d1.megaAttack();
        d1.blast();
        std::vector<Transformer*> teams{&t1, &a1, &d1, &t2, &a2, &d2, &t3, &a3, &d3};

        for (const auto& bot : teams)
        {
            bot->jump();
            bot->megaAttack();
            bot->blast();
        }
    }

}




