#include <iostream>
#include <string>
#include <cstdlib>

void tutorialInput(int expected) {
    std::cin >> input;
    while (input != expected) {
        std::cout << "Please enter" << expected << "to proceed with the tutorial" << std::endl;
        std::cin >> input;
    } 
}

void tutorial() {
    std::cout << "Welcome to the tutorial of BidBidOff, click enter to proceed, press else to go back"
    std::string tutorialary;
    std::cin >> tutorialary;
   
    if(tutorialary != "") {
        return;
    }
    std::cout << "The BidBidOff game asks you to return an X amount of money based on the difficulty selected" << std::endl;
    std::cout << "For this tutorial, you will be given $50 and your goal is to return $100" << std::endl;
    std::cout << "There are 3 different auction house levels. They are;" << std::endl;
    std::cout << "1. Entry Level" << std::endl;
    std::cout << "2. Upper Level" << std::endl;
    std::cout << "3. Fantaisie Level" << std::endl;
    std::cout << "Try pressing 1" << std::endl;
    
    int tutorialChoice;
    std::cin >> tutorialChoice;
    
    tutorialInput(1);

    std::cout << "In BidBidOff there are 2 gamemodes that can be switched at anytime." << std::endl;
    std::cout << "1. Single Selections" << std::endl;
    std::cout << "2. Blind Box Bids" << std::endl;
    std::cout << "For the single selections, you will be shown a display of random items to bid on" << std::endl;
    std::cout << "For the blind box, you are given a random assortment of random items that are unknown" << std::endl;
    std::cout << "Try selecting 1" << std::endl;

    tutorialInput(1);

    std::cout << "A random item will be shown to you with it's starting bid price" << std::endl;

    // INSET THE THING HERE

    std::cout << "You will have the choice to either bid on the item or pass" << std::endl;
    std::cout << "There will be other bidders competing for the same item" << std::endl;

}