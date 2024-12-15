/* Artem Churilov st130184@student.spbu.ru
   4 task "Overload"
*/

#include <gtest/gtest.h>
#include "player.h"

TEST(PlayerTest, Equality) {
    Player p1(7, 1, "Optimus");
    Player p2(7, 1, "Bumblebee");
    p1.setShieldlvl(50);
    p2.setShieldlvl(50);
    EXPECT_TRUE(p1==p2);
}
TEST(PlayerTest, NotEquality) {
    Player p1(7, 1, "Optimus");
    Player p2(7, 1, "Bumblebee");
    p1.setShieldlvl(50);
    p2.setShieldlvl(60);
    EXPECT_TRUE(p1!=p2);
}
TEST(PlayerTest, More) {
    Player p1(7, 1, "Optimus");
    Player p2(7, 1, "Bumblebee");
    p1.setShieldlvl(60);
    p2.setShieldlvl(50);
    EXPECT_TRUE(p1>p2);
}
TEST(PlayerTest, Less) {
    Player p1(7, 1, "Optimus");
    Player p2(7, 1, "Bumblebee");
    p1.setShieldlvl(50);
    p2.setShieldlvl(60);
    EXPECT_TRUE(p1<p2);
}

TEST(PlayerTest, EqMore) {
    Player p1(7, 1, "Optimus");
    Player p2(7, 1, "Bumblebee");
    p1.setShieldlvl(60);
    p2.setShieldlvl(50);
    EXPECT_TRUE(p1>=p2);
}
TEST(PlayerTest, EqLess) {
    Player p1(7, 1, "Optimus");
    Player p2(7, 1, "Bumblebee");
    p1.setShieldlvl(50);
    p2.setShieldlvl(60);
    EXPECT_TRUE(p1<=p2);
}


TEST(PlayerTest, LessParameterizedConstructor) {
    Player p(7, 1, "Optimus");
    EXPECT_EQ(p.getMS(), 7);   
    EXPECT_EQ(p.getIS(), 1);    
    EXPECT_EQ(p.getFuel(), 1);
    EXPECT_EQ(p.getEnergy(), 1);
    EXPECT_EQ(p.getName(), "Optimus"); 
}


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

