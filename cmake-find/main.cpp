#include <iostream>
#include <sstream>
#include <string>

#include "MathFunctions.h"

int main(int argc, char* argv[])
{
    std::cout << "Hello, from cmake-find!\n";

    // convert input to double
    const double inputValue = std::stod(argv[1]);

    const double outputValue = mathfunctions::sqrt(inputValue);

    std::cout << "The square root of " << inputValue << " is " << outputValue
                << std::endl;
}
