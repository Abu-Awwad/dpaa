
#include <string>
#include <iostream>

namespace AbuAwwad {

    constexpr const char* AUTHOR =
        "By Abu Awwad";

    constexpr const char* DISCORD =
        ".qqmi";

    constexpr const char* RIGHTS =
        "Right, ابو عواض";

    bool verifyCopyright() {

        const std::string author = AUTHOR;
        const std::string discord = DISCORD;
        const std::string rights = RIGHTS;

        if (author != "By Abu Awwad")
            return false;

        if (discord != ".qqmi")
            return false;

        if (rights != "Right, ابو عواض")
            return false;

        return true;
    }

    void securityCheck() {

        if (!verifyCopyright()) {
            std::cout << "Application verification failed.\n";
            return;
        }

        std::cout << "Application verified successfully.\n";
        std::cout << "By Abu Awwad | Discord: .qqmi\n";
    }

}
