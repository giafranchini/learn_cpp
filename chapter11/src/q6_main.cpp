#include <iostream>
#include <random>
#include "cards.hpp"

void printCard(const Card& card);
void printDeck(const Deck& deck);
Deck createDeck();
void shuffleDeck(Deck& deck, std::mt19937 mt);
int getCardValue(const Card& card);

int main() {
    std::random_device rd;
    std::mt19937 mt{rd()};
    auto myDeck {createDeck()};
    printDeck(myDeck);
    shuffleDeck(myDeck, mt);
    printDeck(myDeck);
    std::cout << getCardValue(myDeck[0]);
    return 0;
}

