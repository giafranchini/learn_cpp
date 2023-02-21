#include <iostream>
#include <array>
#include <numeric>

namespace Card {
    enum Card {
        healthPotions,
        torches,
        arrows,
    }; 
}

template <typename T, std::size_t size>
T countTotalItems(const std::array<T,size>& array) {
    return std::reduce(array.begin(), array.end());
}

int main() {
    std::array myCards {2.0, 5.0, 10.0};
    std::cout << "Total number of cards: " << countTotalItems(myCards) << std::endl;
    std::cout << "Total number of torches: " << myCards[Card::torches] << std::endl;    
    return 0;
}