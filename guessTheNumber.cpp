// Copyright (c) 2022 maliksalem1
//
// Created by: maliksalem1
// Created on: Oct 2022
// This program checks if you guess the right number

#include <iostream>

int main() {
    // This function sees if you guessed right or wrong
    const int CORRECT_NUMBER = 5;
    int guessedNumber;

    // Input
    std::cout << "Enter the number between 0-9: ";
    std::cin >> guessedNumber;
    std::cout << "";

    // Process and Output
    if (guessedNumber == CORRECT_NUMBER) {
        std::cout << "" << std::endl;
        std::cout << "You guessed right";
    }

    if (guessedNumber != CORRECT_NUMBER) {
        std::cout << "" << std::endl;
        std::cout << "You guessed wrong";
    }
    std::cout << "" << std::endl;
    std::cout << "\nDone.";
}
