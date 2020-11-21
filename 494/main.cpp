// UVa 494 - Kindergarten Counting Game

#include <iostream>

int main() {

    std::string line;

    while (std::getline(std::cin, line)) {
        if (line.length() > 0) {
            unsigned count = 0;

            if (std::isalpha(line.at(0))) {
                ++count;
            }

            for (int i = 1; i < line.length(); ++i) {
                if (std::isalpha(line.at(i)) &&
                    !std::isalpha(line.at(i - 1))) {
                    ++count;
                }
            }

            std::cout << count << std::endl;
        }
    }

    return 0;
}
