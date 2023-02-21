#ifndef CARDS
#define CARD

#include <array>

enum class Rank {
    rank_2,
    rank_3,
    rank_4,
    rank_5,
    rank_6,
    rank_7,
    rank_8,
    rank_9,
    rank_10,
    rank_jack,
    rank_queen,
    rank_king,
    rank_ace,

    max_rank,
};

enum class Suit {
    suit_hearts,
    suit_diamond,
    suit_spades,
    suit_clubs,

    max_suit,
};

struct Card
{
    Rank rank{};
    Suit suit{}; 
};

using Deck = std::array<Card,52>;
using Index = Deck::size_type;

#endif 