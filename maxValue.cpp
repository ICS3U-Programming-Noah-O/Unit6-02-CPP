// Copyright (c) 2022 Noah Ouellette All rights reserved.
//
// Created by: Noah Ouellette
// Created on: Jan. 28, 2022
// This program find the max value in an array
// of random integers
#include <iostream>
#include <iomanip>
#include <random>


template<size_t N>
int calculateMaxValue(std::array<int, N> listOfNumbers) {
    // This function calculates the max
    int maxValue = 1;
    // Loop that calculates the max value
    for (int counter = 0; counter < 10; counter++) {
        if (maxValue < listOfNumbers[counter]) {
            maxValue = listOfNumbers[counter];
        }
    }
    return maxValue;
}


int main() {
    // This function creates the array and
    // fills the array
    std::array<int, 10> randomNumbers;
    int randomNumber;
    int num;
    int maxV;
    for (int counter = 0; counter < 10; counter++) {
        // Generating random number
        std::random_device rseed;

        std::mt19937 rgen(rseed());  // mersenne_twister

        std::uniform_int_distribution<int> idist(0, 100);

        randomNumber = idist(rgen);

        num = randomNumber;

        randomNumbers[counter] = randomNumber;
        
        std::cout << randomNumber << " added to position " << counter << "\n";
    }
    maxV = calculateMaxValue(randomNumbers);
    std::cout << maxV;
}

