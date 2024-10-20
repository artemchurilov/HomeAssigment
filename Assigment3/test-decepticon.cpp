/* Artem Churilov st130184@student.spbu.ru
   3 task "Class Transformer"
*/


#include <gtest/gtest.h>
#include "decepticon.h"

TEST(DecepticonTest, ParameterizedConstructor) {
    Decepticon d(1, 1, 1, 7);
    EXPECT_EQ(d.getMS(), 1);  
    EXPECT_EQ(d.getIS(), 1);   
    EXPECT_EQ(d.getFuel(), 1);
    EXPECT_EQ(d.getEnergy(), 7);
}

TEST(DecepticonTest, Transform) {
    Decepticon d(1, 1, 1, 7);
    EXPECT_TRUE(d.transform()); 
}

TEST(DecepticonTest, GetSetMethods) {
    Decepticon d(1, 1, 1, 7);
    d.setRank(15);
    EXPECT_EQ(d.getRank(), 15); 
    d.setScheme("Take control over Cybertron");
    EXPECT_EQ(d.getScheme(), "Take control over Cybertron"); 
    d.setAttacklvl(50);
    EXPECT_EQ(d.getAttacklvl(), 50); 
}

