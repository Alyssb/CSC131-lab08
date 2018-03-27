/**
 * CSC131 - Computational Thinking
 * Missouri State University
 * 
 * @file lab08.cpp
 * @author Alyssa Slayton <ajs41@missouristate.edu>
 */

//all comments like this are for future self.
#include <cstdlib> //c standard library, needed for all std lines
#include <iostream> //for cout and cin, all user inputs
#include <string> //to be able to use any sort of string

double calculateRetail(double wholesale, double markup);

//main has to be an int because you return the exit sucess sequence
int main() {

    std::cout << "what are you buying?? ";
    std::string item{};
    std::getline(std::cin, item);
    std::cout << "you're getting a "
              << item
              << "?, wOw!"
              << std::endl;

    double wholesale{};
    std::cout << "og price?? ";
    std::cin >> wholesale;
    std::cout << "WOW!! $"
              << wholesale
              << "?? what a low price!!"
              << std::endl;

    double markup{};
    std::cout << "what's the markup tho?? ";
    std::cin >> markup;
    std::cout << markup
              << "%? now that's just ridiculous smh"
              << std::endl;

    std::cout << "\nsry but that's gonna be "
              << calculateRetail(wholesale, markup)
              << " dolors tyty."
              << std::endl;

    return EXIT_SUCCESS;
}

double calculateRetail(double wholesale, double markup) {

    return (wholesale+(wholesale*(markup/100)));

}
