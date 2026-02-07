#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>


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
        singleBidSelection(auctionLevelChoice);
    }
    else {
        blindBoxBid(auctionLevelChoice);
    }

}