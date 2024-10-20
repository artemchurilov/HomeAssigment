/* Artem Churilov st130184@student.spbu.ru
   3 task "Class Transformer"
*/

#include <gtest/gtest.h>
#include "autobot.h"

TEST(AutobotTest, ParameterizedConstructor)
{
    Autobot a(1, 1, 1, 7);
    EXPECT_EQ(a.getMS(), 1);  
    EXPECT_EQ(a.getIS(), 1);   
    EXPECT_EQ(a.getFuel(), 1);
    EXPECT_EQ(a.getEnergy(), 7);
}

TEST(AutobotTest, Transform) 
{
    Autobot a(1, 1, 1, 7);
    EXPECT_TRUE(a.transform()); 
}

TEST(AutobotTest, GetSetMethods) 
{
    Autobot a(1, 1, 1, 7);
    a.setRep(15);
    EXPECT_EQ(a.getRep(), 15); 
    a.setMis("Save the world");
    EXPECT_EQ(a.getMis(), "Save the world"); 
    a.setShieldlvl(50);
    EXPECT_EQ(a.getShieldlvl(), 50); 
}

