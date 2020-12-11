//
// file: program.cpp
// author: Michael Brockus
// gmail: <michaelbrockus@gmail.com>
//
#include "program.hpp"
#include <iostream>
#include <cstdlib>

//
// Greet the user
//
const char * greet(void)
{
    return "Hello, C++ Developer.";
} // end of functions greet

//
// foundation of the program and related
// application logic must be implemented
// in the foundation.
//
int foundation(void)
{
    std::cout << greet() << std::endl;
    return EXIT_SUCCESS;
} // end of function foundation
