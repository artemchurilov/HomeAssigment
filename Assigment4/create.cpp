/* Artem Churilov st130184@student.spbu.ru
   4 task "Overload"
*/

#include <iostream>
#include "create.h"
void create(uint& reMS, uint& reIS, uint& reFuel, uint& reEnergy, std::string& reName)
{
    uint stMS = 1;
    uint stIS = 1;
    uint stFuel = 1;
    uint stEnergy = 1;

    std::cout<<"Please, enter 4 characteristic of your transformer."<<std::endl<<"Sum of them must be equal 10, so be carefully with choice."<<std::endl<<"Split your points between movespeed, count of inventory slots, start energy and fuel. Minimum for each - 1"<<std::endl<<std::endl;
    std::cout<<"Movespeed -- ";
    std::cin>>stMS;
    if (stMS>=1 and stMS<=7)
    {
        std::cout<<"Inventory slots --  ";
        std::cin>>stIS;
        if (stIS>=1 and stIS<=7)
        {
            std::cout<<"Fuel -- ";
            std::cin>>stFuel;
            if (stFuel>=1 and stFuel<=7)
            {
                std::cout<<"Energy -- ";
                std::cin>>stEnergy;
                if (stEnergy>=1 and stEnergy<=7)
                {
                    if ((stMS + stIS+stEnergy+stFuel) == 10)
                    {
                        std::cout<<"Well done! You correctly created transformer"<<std::endl;
                        reMS = stMS;
                        reIS = stIS;
                        reFuel = stFuel;
                        reEnergy = stEnergy;
                        std::cout<<"So, enter your name -- ";
                        std::cin>>reName;
                    }
                    else
                    {
                        std::cout<<"Something went wrong.Please try again"<<std::endl;
                    }
                }
                else
                {
                    std::cout<<"Something went wrong.Please try again"<<std::endl;
                }
            }
            else
            {
                std::cout<<"Something went wrong.Please try again"<<std::endl;
            }
        }
        else
        {
            std::cout<<"Something went wrong.Please try again"<<std::endl;
        }
    }
    else
    {
        std::cout<<"Something went wrong. Please try again"<<std::endl;
    }
}

