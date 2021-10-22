// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Seti Ngabo
// Created on: Sept 2021
// This Program calculates the volume of a cube

#include <iostream>

float cubeVolume(float length) {
    // this function calculates the volume of a cube
    float volume;


    // process
    volume = (length * length * length);

    return volume;
}

int main() {
    // this function gets length

    // input
    std::string length_string;
    float length;
    float volumeNumber;

    std::cout << "Enter cube lenth (cm): ";
    std::cin >> length_string;

    try {
        length = stof(length_string);
        // call function
        volumeNumber = cubeVolume(length);
        if (length < 0) {
            std::cout << "\n" << length_string
                << " is a negative number, try again." << std::endl;
        } else {
            std::cout << "\nThe volume of the cube is "
                << volumeNumber << " cm³ " << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "\n" << length_string
            << " is an invalid input, try again." << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
