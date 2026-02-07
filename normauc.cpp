#include "item.hpp"
#include <vector>

// what items are found in the level 1 auction

static std::vector<ItemInfo> level1items = {
    {"Fountain Pen", "Rare", 30, 40}, // item name, rarity, sell price, buy price
    {"Dictionary", "Uncommon", 15, 20},
    {"Grand Clock", "Rare", 55, 65},
    {"Teddy Bear", "Uncommon", 10, 15},
    {"Nail Polish", "Common", 5, 8},
    {"Dumbbells", "Common", 4, 7},
    {"Hello Kitty Keychain", "Common", 2, 5},
    {"Officeworks Mouse", "Common", 3, 6},
    {"Choker", "Uncommon", 17, 22},
    {"Mouse Pad", "Common", 5, 8},
    {"USB", "Common", 4, 7},
    {"Potted Cactus", "Uncommon", 23, 28},
    {"Mug", "Common", 4, 7},
    {"Blu-Tack", "Common", 3, 6},
    {"Sausage", "Common", 5, 8},
    {"Starbucks Coffee Beans", "Common", 12, 15}
    };

    const std::vector<ItemInfo>& item1() {
        return level1items;
    }