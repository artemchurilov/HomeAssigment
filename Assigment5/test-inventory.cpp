/* Artem Churilov st130184@student.spbu.ru
   3 task "Class Transformer"
*/

#include "gtest/gtest.h"
#include "inventory.h"

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}


TEST(InventoryTest, ConstructorWithSize)
{
    Inventory inventory(5);
    for (int i = 0; i < 5; ++i)
    {
        EXPECT_EQ(inventory.getItem(i), 0);
    }
}

TEST(InventoryTest, AddItem)
{
    Inventory inventory(3);
    inventory.addItem(1, 10);
    EXPECT_EQ(inventory.getItem(1), 10);
}

TEST(InventoryTest, AddItemOutOfBounds)
{
    Inventory inventory(3);
    inventory.addItem(5, 10);
    EXPECT_EQ(inventory.getItem(2), 0);
}

TEST(InventoryTest, DisplayItems)
{
    Inventory inventory(3);
    inventory.addItem(0, 5);
    inventory.addItem(1, 10);
    inventory.addItem(2, 15);
    inventory.displayItems();
}

TEST(InventoryTest, GetItemValidIndex)
{
    Inventory inv(3);
    inv.addItem(0, 42);
    EXPECT_EQ(inv.getItem(0), 42);
}

TEST(InventoryTest, GetItemInvalidIndex)
{
    Inventory inv(3);
    EXPECT_EQ(inv.getItem(-1), -1);
    EXPECT_EQ(inv.getItem(3), -1);
}

