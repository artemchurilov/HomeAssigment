/* Artem Churilov st130184@student.spbu.ru
   3 task "Class Transformer"
*/

#include <gtest/gtest.h>
#include "player.h"

TEST(PlayerTest, ParameterizedConstructor) 
{
    Player p(2, 2, 3, 3, "Optimus Prime");
    EXPECT_EQ(p.getMS(), 2);   
    EXPECT_EQ(p.getIS(), 2);    
    EXPECT_EQ(p.getFuel(), 3);
    EXPECT_EQ(p.getEnergy(), 3);
    EXPECT_EQ(p.getName(), "Optimus Prime"); 
}

TEST(PlayerTest, Fire) 
{
    Player p(2, 2, 3, 3, "Optimus Prime");
    EXPECT_FALSE(p.fire()); 
}

TEST(PlayerTest, Transform) 
{
    Player p(2, 2, 3, 3, "Optimus Prime");
    EXPECT_TRUE(p.transform());  
}

TEST(PlayerTest, GetSetMethods) 
{
    Player p(2, 2, 3, 3, "Optimus Prime");
    p.setKills(5);
    EXPECT_EQ(p.getKills(), 5);
    p.setName("Bumblebee");
    EXPECT_EQ(p.getName(), "Bumblebee"); 
    p.setShieldlvl(75);
    EXPECT_EQ(p.getShieldlvl(), 75); 
}

