/**
 * CSC131 - Computational Thinking
 * Missouri State University
 * 
 * @file lab08.cpp
 * @author Alyssa Slayton <ajs41@missouristate.edu>
 */

// TODO: Include any and all libraries needed by your program
#include <cstdlib> //c standard library, needed for all std lines
#include <iostream> //for cout and cin, all user inputs
#include <string> //to be able to use any sort of string

double calculateRetail(double wholesale, double markup);

// TODO: Write main below
//main has to be an int because you return the exit sucess sequence
int main() {

    double wholesale{};
    double markup{};
    double final{};

    std::cout << "what are you buying?? ";
    std::string item{};
    std::getline(std::cin, item);
    std::cout << "you're getting a " << item << ", wOw" << std::endl;
    std::cout << "og price?? ";
    std::cin >> wholesale;
    std::cout << "WOW!! " << wholesale << "?? what a low price!!" << std::endl;
    std::cout << "what's the markup tho?? ";
    std::cin >> markup;
    std::cout << markup << "%? now that's just ridiculous smh" << std::endl;


    return EXIT_SUCCESS;
}

double calculateRetail(double wholesale, double markup) {

    return (wholesale+(wholesale*(markup/100)));

}
