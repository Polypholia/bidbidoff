#include "item.hpp"
#include "tutorial.hpp"
#include <string>
#include <iostream>
#include <cctype>

bool playerStartDecision(int a) {
    if(a == 1) {
        tutorial();
        return false;
    }
    else if(a == 2) {
        return true;
    }
    else if(a == 3) {
        return true;
    }
    else {
        std::cout << "Invalid Option. Please try again! :)\n";
        return false;
    }
}

void playerPanel() {
    std::cout << "1. Bid\n";
    std::cout << "2. Sell\n";
    std::cout << "3. Inventory\n";
}

void playerPanelChoice(int a, int b, int c) { // proceeding from playerPanel
    if(a == 1) {
        auctionPanel(b);
    }
    else if(a == 2) {
        sellPanel(b);
    }
    else {
        inventory(b, c);
    }
}

int main() {
    std::cout << "Welcome to BidBidOff\n";
    std::cout << "Select an Option:\n";
    std::cout << "1. Tutorial\n";
    std::cout << "2. Play\n";
    std::cout << "3. Quit\n";

    int playerChoice;
    bool startFinish;
    bool onlineStatus = false; // players are false by default unless they continue to play
    
    do { // Starting Panel
        std::cin >> playerChoice;
        startFinish = playerStartDecision(playerChoice);
        if(startFinish == false) {
            std::cout << "Invalid Option\n";
        }
        
        onlineStatus = false;
        if(playerChoice != 3) {
            onlineStatus = true;
        }
    } while(startFinish != true);

    if(onlineStatus == false) { // quit
        std::cout << "Thanks for looking!\n";
        return 0;
    }

    int playerBalance;
    int targetGoal;

    std::cout << "Now Please Choose (type) your Difficulty\n";
    std::cout << "Easy | Starting Allowance - $100 | Target Goal - $1000\n";
    std::cout << "Medium | Starting Allowance - $50 | Target Goal - $10000\n";
    std::cout << "Hard | Starting Allowance - $50 | Target Goal - $100000\n";

    std::string difficultyChoice;

    do{
        std::cin >> difficultyChoice;
        for(char& c : difficultyChoice) {
        c = std::tolower(c);
        } 
        if(difficultyChoice != "easy" && difficultyChoice != "medium" && difficultyChoice != "hard") {
            std::cout << "Invalid Option. Please try again! :)\n"; 
        }
    } while(difficultyChoice != "easy" && difficultyChoice != "medium" && difficultyChoice != "hard");
   
    if(difficultyChoice == "easy") {
        playerBalance = 100;
        targetGoal = 1000;
    }
    else if(difficultyChoice == "medium") {
        playerBalance = 50;
        targetGoal = 10000;
    }
    else {
        playerBalance = 100;
        targetGoal = 1000;
    }

    while(playerBalance != targetGoal) {
        playerPanel();
        int playerPanelChoice;
        std::cin >> playerPanelChoice;
        if(playerPanelChoice != 1 && playerPanelChoice != 2 && playerPanelChoice != 3) {
            std::cout << "Invalid Option\n";
            continue;
        }
        playerAction(playerPanelChoice);
    }
    std::cout << "Well Done, You have achieved your target goal for the" << difficultyChoice << "difficulty. Thank You for Playing\n";


    return 0;
}