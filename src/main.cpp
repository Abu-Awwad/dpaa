
#include <iostream>
#include <string>

namespace AbuAwwad {

    constexpr const char* APP_NAME =
        "Download Abu Awwad";

    constexpr const char* AUTHOR =
        "By Abu Awwad";

    constexpr const char* DISCORD =
        ".qqmi";

    constexpr const char* COPYRIGHT =
        "Right, ابو عواض";

    void showWelcome() {
        std::cout << "================================\n";
        std::cout << "       DOWNLOAD ABU AWWAD\n";
        std::cout << "================================\n\n";

        std::cout << "Welcome!\n\n";

        std::cout << "X     - Enter application\n";
        std::cout << "OPTIONS - About application\n\n";

        std::cout << AUTHOR << '\n';
        std::cout << "Discord: " << DISCORD << '\n';
        std::cout << COPYRIGHT << '\n';
    }

}

int main() {
    AbuAwwad::showWelcome();
    return 0;
}
