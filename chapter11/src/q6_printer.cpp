#include <iostream>
#include "cards.hpp"

void printCard(const Card& card) {
    switch (card.rank)
    {
    case Rank::rank_2:       std::cout << '2';  break;
    case Rank::rank_3:       std::cout << '3';  break;
    case Rank::rank_4:       std::cout << '4';  break;
    case Rank::rank_5:       std::cout << '5';  break;
    case Rank::rank_6:       std::cout << '6';  break;
    case Rank::rank_7:       std::cout << '7';  break;
    case Rank::rank_8:       std::cout << '8';  break;
    case Rank::rank_9:       std::cout << '9';  break;
    case Rank::rank_10:      std::cout << 'T'; break;
    case Rank::rank_jack:    std::cout << 'J';  break;
    case Rank::rank_queen:   std::cout << 'Q';  break;
    case Rank::rank_king:    std::cout << 'K';  break;
    case Rank::rank_ace:     std::cout << 'A';  break;   
    default:                 std::cout << '?';  break;
    }

    switch (card.suit)
    {
    case Suit::suit_hearts:  std::cout << 'H'; break;
    case Suit::suit_diamond: std::cout << 'D'; break;
    case Suit::suit_spades:  std::cout << 'S'; break;
    case Suit::suit_clubs:   std::cout << 'C'; break;   
    default:                 std::cout << '?'; break;
    }
    return;
}

void printDeck(const Deck& deck) {
    for (const auto card : deck) {
        printCard(card);
        std::cout << ' ';
    }
    std::cout << "\n";
    return;
}