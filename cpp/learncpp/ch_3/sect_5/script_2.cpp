#include <iostream>
#include <plog/Log.h>
#include <plog/Initializers/RollingFileInitializer.h>

/*
 * Since I am using plog, I have to include the additional library.
 * I can include the additional library as follows:
 * g++ -I/home/nerve/Packages/plog/include/ script_2.cpp
 */

int getUserInput()
{
    PLOGD << "getUserInput() called"; // defined by plog library
    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;
    return x;
}

int main()
{
    plog::init(plog::debug, "Logfile.txt"); // start
    PLOGD << "main() called";

    int x{ getUserInput() };
    std::cout << "You entered: " << x;
    return 0;
}
