/* Artem Churilov st130184@student.spbu.ru
   4 task "Overload"
*/


#include <gtest/gtest.h>
#include "decepticon.h"
TEST(DecepticonTest, Equality) {
    Decepticon d1(1,2,3,4);
    Decepticon d2(1,2,3,4);
    d1.setAttacklvl(50);
    d2.setAttacklvl(50);
    EXPECT_TRUE(d1==d2);
}
TEST(DecepticonTest, NotEquality) {
    Decepticon d1(1,2,3,4);
    Decepticon d2(1,2,3,4);
    d1.setAttacklvl(50);
    d2.setAttacklvl(60);
    EXPECT_TRUE(d1!=d2);
}
TEST(DecepticonTest, More) {
    Decepticon d1(1,2,3,4);
    Decepticon d2(1,2,3,4);
    d1.setAttacklvl(60);
    d2.setAttacklvl(50);
    EXPECT_TRUE(d1>d2);
}
TEST(DecepticonTest, Less) {
    Decepticon d1(1,2,3,4);
    Decepticon d2(1,2,3,4);
    d1.setAttacklvl(50);
    d2.setAttacklvl(60);
    EXPECT_TRUE(d1<d2);
}

TEST(DecepticonTest, EqMore) {
    Decepticon d1(1,2,3,4);
    Decepticon d2(1,2,3,4);
    d1.setAttacklvl(60);
    d2.setAttacklvl(50);
    EXPECT_TRUE(d1>=d2);
}
TEST(DecepticonTest, EqLess) {
    Decepticon d1(1,2,3,4);
    Decepticon d2(1,2,3,4);
    d1.setAttacklvl(50);
    d2.setAttacklvl(60);
    EXPECT_TRUE(d1<=d2);
}

TEST(DecepticonTest, LessParameterizedConstructor) {
    Decepticon d(4, 4);
    EXPECT_EQ(d.getMS(), 4);  
    EXPECT_EQ(d.getIS(), 4);   
    EXPECT_EQ(d.getFuel(), 1); 
    EXPECT_EQ(d.getEnergy(), 1);
}

TEST(DecepticonTest, ParameterizedConstructor) 
{
    Decepticon d(1, 1, 1, 7);
    EXPECT_EQ(d.getMS(), 1);  
    EXPECT_EQ(d.getIS(), 1);   
    EXPECT_EQ(d.getFuel(), 1);
    EXPECT_EQ(d.getEnergy(), 7);
}

TEST(DecepticonTest, Transform) 
{
    Decepticon d(1, 1, 1, 7);
    EXPECT_TRUE(d.transform()); 
}

TEST(DecepticonTest, GetSetMethods) 
{
    Decepticon d(1, 1, 1, 7);
    d.setRank(15);
    EXPECT_EQ(d.getRank(), 15); 
    d.setScheme("Take control over Cybertron");
    EXPECT_EQ(d.getScheme(), "Take control over Cybertron"); 
    d.setAttacklvl(50);
    EXPECT_EQ(d.getAttacklvl(), 50); 
}

