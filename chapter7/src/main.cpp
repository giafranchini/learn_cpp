#include <iostream>
#include <random>

// just a test for type aliasing
using UniformDist = std::uniform_int_distribution<int>;

int getUserInput(int numGuess) {
	int input {0};
	std::cout << "Guess #" << numGuess << ": ";
	std::cin >> input;
	return input;
}

bool checkInput(int goal, int input) {
	if (goal > input) {
		std::cout << "Too low!\n";
	} else if (goal < input) {
		std::cout << "Too high!\n";
	} else if (goal == input) {
		std::cout << "Got it!\n";
		return 1;
	}
	return 0;
}

void gameLoop(int goal, int maxGuess) {
	int numGuess {1};
	bool isDone {false};
	std::cout << "Let's play a game. I'm thinking of a number between 1 and 100. You have " << maxGuess << " tries to guess what it is.\n"; 
	while (!isDone) {
		if (numGuess > maxGuess) {
			std::cout << "Sorry, you lose. The correct number was " << goal << std::endl;
			break;
		}
		int input {getUserInput(numGuess)};
		isDone = checkInput(goal, input);
		++numGuess;
	}
	return;
}

int main()
{
	std::random_device rd;
	std::seed_seq ss{rd(), rd(), rd(), rd(), rd(), rd(), rd(), rd()};
	std::mt19937 mt{ss};
	UniformDist dist{1,100};
	int maxGuess{7};
	bool game_on{true};
	char resp {'y'}; 
	do {
		int goal {dist(mt)};
		std::cout << goal;
		gameLoop(goal, maxGuess);
		std::cout << "Would you like to play again? [y/n]";
		std::cin >> resp;
		if (resp == 'n') {
			game_on = false;
			std::cout << "Bye then!" << std::endl;
		}
	} while (game_on);
	return 0;
}