#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "item.hpp"

void singleBidSelection(int x, int y) { // x = auction level, y = player balance
    int r;
    float multiplier;
    int better;
    std::vector(std::string) betterNames = {"Alice", "Julian", "Maurice"};
    if(x == 1) {
        srand(time(nullptr));
        for(int i = 0; i < 3; i++) {
            r = rand() % (item1.size() - 1);
            std::string auctioneditem1 = item1[r].getName();
            std::string item1rarity = item1[r].getRarity();
        
            if(item1rarity == "Common") { // rarity multiplier price
                multiplier = rand() % 11;
                multiplier /= 10;
                multiplier += 0.5
            }
            else if(item1rarity == "Uncommon") {
                multiplier = rand() % 13;
                multiplier /= 10;
                multiplier += 0.5
            }
            else {
                multiplier = rand() % 15;
                multiplier /= 10;
                multiplier += 0.5
            }

            int item1trueprice = item1[r].getBuyPrice();
            float multipileditem1price = item1trueprice * multiplier

            std::cout << auctioneditem1 << " | " << item1rarity << "\n";
            int better1Alice = 0;;
            int better2Julian = 0;
            int better3Maurice = 0;
            int bid = 0.5 * item1trueprice;
            int biddingamount;
            while(better1Alice <= multipileditem1price && better2Julian <= multipileditem1price && better3Maurice <= multipileditem1price) {
                better = rand() % 3;
                std::cout << "Current Bid is at $" << bid;
                std::cout << "Do you wish to bid\n";
                std::cin << biddingamount;
                if(biddingamount < multipileditem1price - 5) {
                    betters[better] = biddingamount + 5
                    std::cout << betters[better]
                }
            }
        }
    }
    else if(x == 2) {
        srand(time(nullptr));
    }
    else {
        srand(time(nullptr));
    }
}

void auctionPanel(int a) {
    std::cout << "Auction Levels:\n";
    std::cout << "1. Entry Level\n";
    std::cout << "2. Upper Level\n";
    std::cout << "3. Fantaisie Level\n";

    int auctionLevelChoice;
    bool auctionLevelBool = false; 

    do {
        std::cin >> auctionLevelChoice;
        if(auctionLevelChoice != 1 && auctionLevelChoice != 2 && auctionLevelChoice != 3) {
            std::cout << "Invalid Option. Please try again.\n";
            continue;
        }
        auctionLevelBool = true;
    } while(auctionLevelBool == false)

    std::cout << "1. Single Selections\n";
    std::cout << "2. Blind Box Bids\n";

    int auctionGamemodeSelection;
    bool auctionGamemodeSelectionStatus = false;

    do {
        std::cin >> auctionGamemodeSelection;
        if(auctionGamemodeSelection != 1 && auctionGamemodeSelection != 2) {
            std::cout << "Invalid Option. Please try again.\n";
            continue;
        }
        auctionGamemodeSelectionStatus = true;
    } while(auctionGamemodeSelectionStatus = true)

    if(auctionGamemodeSelection == 1) {
        singleBidSelection(auctionLevelChoice, a);
    }
    else {
        blindBoxBid(auctionLevelChoice, a);
    }

}