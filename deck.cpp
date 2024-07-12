#include "deck.h"
#include <stdexcept>

std::string Deck::CreateCard(std::string &Rank, std::string &Suit){
    return Rank + " of " + Suit;
}

void Deck::InitialiseCards(){

    // First vector to iterate
    std::vector<std::string> Ranks = {
        "Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"
    };

    // Next vector to iterate
    std::vector<std::string> Suits = {
        "Hearts", "Diamonds", "Clubs", "Spades"
    };

    // Reserve space for 52 cards
    Cards.reserve(52); 

    for (auto& Suit : Suits) {
        for (auto& Rank : Ranks) {
            Cards.push_back(CreateCard(Rank, Suit));
        }
    }
}

Deck::Deck() {
    // Initialise the cards
    InitialiseCards();
}

// Destructor
Deck::~Deck() {}

std::vector<std::string> Deck::DealCards(int NumberOfCards){
    
    // Create temp variable
    std::vector<std::string> DealtCards;

    // Reserve enough space
    DealtCards.reserve(NumberOfCards);

    // For all cards required
    for (int i = 0; i < NumberOfCards; i++){

        // Check there's cards left
        if (Cards.empty()) {
            throw std::out_of_range("The deck is empty. No more cards to pop.");
        }
        // Else...
        std::string card = Cards.back();
        Cards.pop_back();
        DealtCards.push_back(card);
    }

    return DealtCards;

}
