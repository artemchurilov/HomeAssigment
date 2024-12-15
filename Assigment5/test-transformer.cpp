/* Artem Churilov st130184@student.spbu.ru
   4 task "Overload"
*/

#include <gtest/gtest.h>
#include "transformer.h"
#include "inventory.h"

TEST(TransformerTest, DefaultConstructor)
{
    Transformer t;
    EXPECT_NE(t.getIS(), 0);
}

TEST(TransformerTest, Equality)
{
    Transformer t1(1,2,3,4);
    Transformer t2(1,2,3,4);
    EXPECT_TRUE(t1==t2);
}
TEST(TransformerTest, NotEquality)
{
    Transformer t1(4,3,2,1);
    Transformer t2(1,2,3,4);
    EXPECT_TRUE(t1!=t2);
}
TEST(TransformerTest, More)
{
    Transformer t1(4,3,2,1);
    Transformer t2(1,2,3,4);
    EXPECT_TRUE(t1>t2);
}
TEST(TransformerTest, Less)
{
    Transformer t1(4,3,2,1);
    Transformer t2(7,1,1,1);
    EXPECT_TRUE(t1<t2);
}

TEST(TransformerTest, EqMore)
{
    Transformer t1(4,3,2,1);
    Transformer t2(1,2,3,4);
    EXPECT_TRUE(t1>=t2);
}
TEST(TransformerTest, EqLess)
{
    Transformer t1(4,3,2,1);
    Transformer t2(7,1,1,1);
    EXPECT_TRUE(t1<=t2);
}
TEST(TransformerTest, Output)
{
    Transformer t1(4,3,2,1);
    std::ostringstream os;
    testing::internal::CaptureStdout();
    std::cout<<t1;
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("Transformer info") == std::string::npos);
}


TEST(TransformerTest, ParameterizedConstructor)
{
    Transformer t(1, 2, 3, 4);
    EXPECT_EQ(t.getMS(), 1);
    EXPECT_EQ(t.getIS(), 2);
    EXPECT_EQ(t.getFuel(), 3);
    EXPECT_EQ(t.getEnergy(), 4);
}

TEST(TransformerTest, LessParameterizedConstructor)
{
    Transformer t(4, 4);
    EXPECT_EQ(t.getMS(), 4);
    EXPECT_EQ(t.getIS(), 4);
    EXPECT_EQ(t.getFuel(), 1);
    EXPECT_EQ(t.getEnergy(), 1);
}

TEST(TransformerTest, Fire)
{
    Transformer t(1, 2, 3, 4);
    t.setAmmo(5);
    EXPECT_TRUE(t.fire());
    EXPECT_EQ(t.getAmmo(), 4);
}

TEST(TransformerTest, GetSetMethods)
{
    Transformer t;
    t.setMS(2);
    EXPECT_EQ(t.getMS(), 2);
    t.setIS(3);
    EXPECT_EQ(t.getIS(), 3);
    t.setEnergy(4);
    EXPECT_EQ(t.getEnergy(), 4);
    t.setFuel(1);
    EXPECT_EQ(t.getFuel(), 1);
    t.setAmmo(20);
    EXPECT_EQ(t.getAmmo(), 20);
}


