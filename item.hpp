#ifndef ITEMINFO
#define ITEMINFO

#include <string>
#include <iostream>
#include <vector>

// for what bidding item has, aka properties

class ItemInfo {
private:
    std::string name;
    std::string rarity;
    int sellPrice;
    int buyPrice;
public:
    ItemInfo(std::string name = "", std::string rarity = "", int sellPrice = 0, int buyPrice = 0)
    : name(name), rarity(rarity), sellPrice(sellPrice), buyPrice(buyPrice) {}

    std::string getName() const {
        return name;
    }
    std::string getRarity() const {
        return rarity;
    }
    int getSellPrice() const {
        return sellPrice;
    }
    int getBuyPrice() const {
        return buyPrice;
    }
};

const std::vector<ItemInfo>& item1();
const std::vector<ItemInfo>& item2();
const std::vector<ItemInfo>& item3();

#endif