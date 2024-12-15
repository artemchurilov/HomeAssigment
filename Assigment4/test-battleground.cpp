/* Artem Churilov st130184@student.spbu.ru
   3 task "Class Transformer"
*/

#include <gtest/gtest.h>
#include "battleground.h"
#include "transformer.h"

TEST(BattlegroundTest, AddTransformer) 
{
    Battleground bg("Test Arena");
    Transformer* t1 = new Transformer();
    bg.addTransformer(t1); 
    EXPECT_NO_THROW(bg.addTransformer(t1)); 
}

TEST(BattlegroundTest, RemoveTransformerFromEmpty) 
{
    Battleground bg("Test Arena");
    std::ostringstream oss;
    testing::internal::CaptureStdout();
    bg.removeTransformer(0);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("Transformer removed.") == std::string::npos); 
}

TEST(BattlegroundTest, CorrectRemoveTransformer) 
{
    Battleground bg("Test Arena");
    Transformer* t1 = new Transformer();
    bg.addTransformer(t1); 
    bg.removeTransformer(0);
    std::ostringstream oss;
    testing::internal::CaptureStdout();
    bg.listBG();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("Transformer 1 on Battleground") == std::string::npos);
}


