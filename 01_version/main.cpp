#include "version.hpp"
#include <iostream>

int
main()
{

    std::cout << "Project: MyProject \n"
              << "Major: " << getMyProjectVersionMajor() << "\n"
              << "Minor: " << getMyProjectVersionMinor() << "\n"
              << "Patch: " << getMyProjectVersionPatch() << "\n"
              << "Tweak: " << getMyProjectVersionTweak() << "\n"
              << std::endl;
}
