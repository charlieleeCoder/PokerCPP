#include <iostream>
#include "deck.h"

int main()
{
    // Create a deck
    auto MyDeck = Deck();
    std::vector<std::string> MyHand = MyDeck.DealCards(3);

    // Show me the cards
    for (int i = 0; i < 3; i++){
        std::cout << MyHand[i] << std::endl;
    }
    return 0;
}
