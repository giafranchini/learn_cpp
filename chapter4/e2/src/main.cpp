#include <iostream>
#include <iomanip>

namespace constants {
    constexpr float gravity {9.8};
}

double dynamics (int time, double initial_h, double gravity) {
    double h {initial_h};
    h -= 0.5*gravity*time*time;
    if (h < 0)
        h = 0; 
    return h;
}

int main() {
    //const float g {9.8};
    double tower_h {0};
    std::cout << "Insert the height of the tower: ";
    std::cin >> tower_h;
    std::cout << "At 0 seconds, the ball is at height: " << dynamics(0, tower_h, constants::gravity) << " meters" << std::endl;
    std::cout << "At 1 seconds, the ball is at height: " << dynamics(1, tower_h, constants::gravity) << " meters" << std::endl;
    std::cout << "At 2 seconds, the ball is at height: " << dynamics(2, tower_h, constants::gravity) << " meters" << std::endl;
    std::cout << "At 3 seconds, the ball is at height: " << dynamics(3, tower_h, constants::gravity) << " meters" << std::endl;
    std::cout << "At 4 seconds, the ball is at height: " << dynamics(4, tower_h, constants::gravity) << " meters" << std::endl;
    std::cout << "At 5 seconds, the ball is at height: " << dynamics(5, tower_h, constants::gravity) << " meters" << std::endl;
    return 0;
}