#include "cards.hpp"
#include <random>
#include <algorithm>

Deck createDeck() {
    Deck deck {};
    Index index {0};
        for (int s {0}; s < static_cast<int>(Suit::max_suit); ++s) {
            for (int r {0}; r < static_cast<int>(Rank::max_rank); ++r) {
                deck[index].suit = static_cast<Suit>(s);
                deck[index].rank = static_cast<Rank>(r);   
                ++index;
            }
        }
    return deck; 
}

void shuffleDeck(Deck& deck, std::mt19937 mt) {
    std::shuffle(deck.begin(), deck.end(), mt);
    return;
}

int getCardValue(const Card& card)
{
  switch (card.rank)
  {
  case Rank::rank_2:        return 2;
  case Rank::rank_3:        return 3;
  case Rank::rank_4:        return 4;
  case Rank::rank_5:        return 5;
  case Rank::rank_6:        return 6;
  case Rank::rank_7:        return 7;
  case Rank::rank_8:        return 8;
  case Rank::rank_9:        return 9;
  case Rank::rank_10:       return 10;
  case Rank::rank_jack:     return 10;
  case Rank::rank_queen:    return 10;
  case Rank::rank_king:     return 10;
  case Rank::rank_ace:      return 11;
  default:
    return 0;
  }
}