// Uses the Visual Studio Community 2019 Release - amd64
#include "testeronie.h"

// argc is the amount of arguments and argv is the arguments array
// argc 1 is ALWAYS the path/program name.
int main(int argc, char *argv[])
{
    const char *argvStr;

    // Prints the arguments START
    std::cout << "\nYou have entered " << argc
              << " arguments:"
              << "\n";

    for (int i = 1; i < argc; ++i)
        std::cout << argv[i] << "\n";

    // Prints the arguments END

    // Gets the user input here or sets it to "None" if there is no input
    if (argc < 2)
    {
        argvStr = "None";
    }
    else
    {
        argvStr = argv[1];
        std::cout << "\n\nTEST INPUT: " << argvStr << "\n\n";
    }

    ping(argvStr); // Sends the input to the Hashing function
    return 1;
}