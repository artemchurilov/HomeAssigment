/* Artem Churilov st130184@student.spbu.ru
   5 task "Virtual&Vector"
*/


#include <gtest/gtest.h>
#include "decepticon.h"

TEST(DecepticonTest, JumpFromP)
{
    Decepticon d(1,2,3,4);
    Transformer *p = &d;
    EXPECT_TRUE(p->jump());
}

TEST(DecepticonTest, MegaAttackFromP)
{
    Decepticon d(1,2,3,4);
    Transformer *p = &d;
    EXPECT_TRUE(p->megaAttack());
}

TEST(DecepticonTest, BlastFromP)
{
    Decepticon d(1,2,3,4);
    Transformer *p = &d;
    EXPECT_TRUE(p->blast());
}


TEST(DecepticonTest, Jump)
{
    Decepticon d(1,2,3,4);
    EXPECT_TRUE(d.jump());
}

TEST(DecepticonTest, MegaAttack)
{
    Decepticon d(1,2,3,4);
    EXPECT_TRUE(d.megaAttack());
}

TEST(DecepticonTest, Blast)
{
    Decepticon d(1,2,3,4);
    EXPECT_TRUE(d.blast());
}

TEST(DecepticonTest, Equality)
{
    Decepticon d1(1,2,3,4);
    Decepticon d2(1,2,3,4);
    d1.setAttacklvl(50);
    d2.setAttacklvl(50);
    EXPECT_TRUE(d1==d2);
}
TEST(DecepticonTest, NotEquality)
{
    Decepticon d1(1,2,3,4);
    Decepticon d2(1,2,3,4);
    d1.setAttacklvl(50);
    d2.setAttacklvl(60);
    EXPECT_TRUE(d1!=d2);
}
TEST(DecepticonTest, More)
{
    Decepticon d1(1,2,3,4);
    Decepticon d2(1,2,3,4);
    d1.setAttacklvl(60);
    d2.setAttacklvl(50);
    EXPECT_TRUE(d1>d2);
}
TEST(DecepticonTest, Less)
{
    Decepticon d1(1,2,3,4);
    Decepticon d2(1,2,3,4);
    d1.setAttacklvl(50);
    d2.setAttacklvl(60);
    EXPECT_TRUE(d1<d2);
}

TEST(DecepticonTest, EqMore)
{
    Decepticon d1(1,2,3,4);
    Decepticon d2(1,2,3,4);
    d1.setAttacklvl(60);
    d2.setAttacklvl(50);
    EXPECT_TRUE(d1>=d2);
}
TEST(DecepticonTest, EqLess)
{
    Decepticon d1(1,2,3,4);
    Decepticon d2(1,2,3,4);
    d1.setAttacklvl(50);
    d2.setAttacklvl(60);
    EXPECT_TRUE(d1<=d2);
}

TEST(DecepticonTest, Output)
{
    Decepticon d1(4,3,2,1);
    std::ostringstream os;
    testing::internal::CaptureStdout();
    std::cout<<d1;
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("Decepticon info") == std::string::npos);
}


TEST(DecepticonTest, LessParameterizedConstructor)
{
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

