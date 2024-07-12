#pragma once

#include <string>
#include <vector>

class Deck {

public:

    // Constructor & destructor take no args
    Deck();
    ~Deck();

    // Has a shuffle method
    void ShuffleCards();

    // Has a deal method
    std::vector<std::string> DealCards(int NumberOfCards);

private:

    // Hold record of cards in deck
    std::vector<std::string> Cards;
    void InitialiseCards();
    std::string CreateCard(std::string &Rank, std::string &Suit);
};