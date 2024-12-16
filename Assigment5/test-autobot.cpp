/* Artem Churilov st130184@student.spbu.ru
   5 task "Virtual&Vector"
*/

#include <gtest/gtest.h>
#include "autobot.h"

TEST(AutobotTest, Equality)
{
    Autobot a1(1,2,3,4);
    Autobot a2(1,2,3,4);
    a1.setShieldlvl(50);
    a2.setShieldlvl(50);
    EXPECT_TRUE(a1==a2);
}
TEST(AutobotTest, NotEquality)
{
    Autobot a1(4,3,2,1);
    Autobot a2(1,2,3,4);
    a1.setShieldlvl(50);
    a2.setShieldlvl(60);
    EXPECT_TRUE(a1!=a2);
}
TEST(AutobotTest, More)
{
    Autobot a1(4,3,2,1);
    Autobot a2(1,2,3,4);
    a1.setShieldlvl(60);
    a2.setShieldlvl(50);
    EXPECT_TRUE(a1>a2);
}
TEST(AutobotTest, Less)
{
    Autobot a1(4,3,2,1);
    Autobot a2(7,1,1,1);
    a1.setShieldlvl(50);
    a2.setShieldlvl(60);
    EXPECT_TRUE(a1<a2);
}

TEST(AutobotTest, EqMore)
{
    Autobot a1(4,3,2,1);
    Autobot a2(1,2,3,4);
    a1.setShieldlvl(60);
    a2.setShieldlvl(50);
    EXPECT_TRUE(a1>=a2);
}
TEST(AutobotTest, EqLess)
{
    Autobot a1(4,3,2,1);
    Autobot a2(7,1,1,1);
    a1.setShieldlvl(50);
    a2.setShieldlvl(60);
    EXPECT_TRUE(a1<=a2);
}

TEST(AutobotTest, Output)
{
    Autobot a1(4,3,2,1);
    std::ostringstream os;
    testing::internal::CaptureStdout();
    std::cout<<a1;
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("Autobot info") == std::string::npos);
}

TEST(AutobotTest, ParameterizedConstructor)
{
    Autobot a(1, 1, 1, 7);
    EXPECT_EQ(a.getMS(), 1);
    EXPECT_EQ(a.getIS(), 1);
    EXPECT_EQ(a.getFuel(), 1);
    EXPECT_EQ(a.getEnergy(), 7);
}

TEST(AutobotTest, LessParameterizedConstructor)
{
    Autobot a(4, 4);
    EXPECT_EQ(a.getMS(), 4);
    EXPECT_EQ(a.getIS(), 4);
    EXPECT_EQ(a.getFuel(), 1);
    EXPECT_EQ(a.getEnergy(), 1);
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

