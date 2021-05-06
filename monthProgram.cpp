// Copyright (c) 2021 Felipe Affonso All rights reserved
//
// Created by: Felipe Affonso
// Created on: April 2021
// This program gets a number and show which month relates to it

#include <iostream>

int main() {
    // this function relates the number with the month
    int monthNumber;

    std::cout << "Insert a month number from 1 to 12:";
    std::cin >> monthNumber;

    switch (monthNumber) {
        case 1 :
            std::cout << "\nThe " << monthNumber << " month is January!" <<
            std::endl;
            break;
        case 2 :
            std::cout << "\nThe " << monthNumber << " month is February!" <<
            std::endl;
            break;
        case 3 :
            std::cout << "\nThe " << monthNumber << " month is March!" <<
            std::endl;
            break;
        case 4 :
            std::cout << "\nThe " << monthNumber << " month is April!" <<
            std::endl;
            break;
        case 5 :
            std::cout << "\nThe " << monthNumber << " month is Mary!" <<
            std::endl;
            break;
        case 6 :
            std::cout << "\nThe " << monthNumber << " month is June!" <<
            std::endl;
            break;
        case 7 :
            std::cout << "\nThe " << monthNumber << " month is July!" <<
            std::endl;
            break;
        case 8 :
            std::cout << "\nThe " << monthNumber << " month is August!" <<
            std::endl;
            break;
        case 9 :
            std::cout << "\nThe " << monthNumber << " month is September!" <<
            std::endl;
            break;
        case 10 :
            std::cout << "\nThe " << monthNumber << " month is October!" <<
            std::endl;
            break;
        case 11 :
            std::cout << "\nThe " << monthNumber << " month is November!" <<
            std::endl;
            break;
        case 12 :
            std::cout << "\nThe " << monthNumber << " month is December!" <<
            std::endl;
            break;
        default :
            std::cout << "\nThis number is invalid." << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
