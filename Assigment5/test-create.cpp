/* Artem Churilov st130184@student.spbu.ru
   5 task "Virtual&Vector"
*/

#include <gtest/gtest.h>
#include <sstream>
#include <iostream>
#include "create.h"


class InputOutputMock
{
public:
    std::stringstream input;
    std::stringstream output;
    InputOutputMock()
    {
        std::cin.rdbuf(input.rdbuf());
        std::cout.rdbuf(output.rdbuf());
    }
    ~InputOutputMock()
    {
        std::cin.rdbuf(nullptr);
        std::cout.rdbuf(nullptr);
    }
};


TEST(CreateTest, SuccessfulCreation)
{
    InputOutputMock io;
    uint ms, is, fuel, energy;
    std::string name;
    io.input << "2\n3\n2\n3\nOptimusPrime\n";
    create(ms, is, fuel, energy, name);
    EXPECT_EQ(ms, 2);
    EXPECT_EQ(is, 3);
    EXPECT_EQ(fuel, 2);
    EXPECT_EQ(energy, 3);
    EXPECT_EQ(name, "OptimusPrime");
}

